#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE_TABLE 8     // Oyun alanının boyutu (8x8)
#define MINE_NUMBER 5    // Mayın sayısı

// Oyun alanı ve oyun verileri için küresel değişkenler
char tab[SIZE_TABLE+2][SIZE_TABLE+2];        // Oyuncunun gördüğü oyun alanı (gizli mayınlar '#' ile gösteriliyor)
int tabvalue[SIZE_TABLE+2][SIZE_TABLE+2];    // Her hücrenin değeri, mayın mı, sayı mı (değerler burada tutulur)
int row, column;     // Kullanıcının seçtiği satır ve sütun
int nb_mine;         // Mayın sayısı
int win = 0;         // Oyunun kazanılıp kazanılmadığını kontrol eden değişken
int howmany;         // Rastgele açılan hücre sayısını tutan değişken

// Fonksiyon prototipleri
int control();
void create_mines();                      
void starting();
void after_starting();
void game_win();
void again_game();
void game_over();
void game_continue();

int main(){
    printf("WELCOME TO MY MINESWEEPER GAME: ");   // Oyuncuya hoş geldiniz mesajı
	puts("");
    starting();       // Oyunun başlangıç ayarlarını yapar (tabloyu oluşturur)
    after_starting(); // Oyuncunun girdi yapacağı ana oyun döngüsüne girer
    return 0;
}

// Mayınları rastgele yerleştiren fonksiyon
void create_mines(){
    int i, j, a, b, k, p;
    
    // Oyun alanını sıfırla (tüm hücreleri sıfır yap)
	for(i = 1; i <= SIZE_TABLE + 1; i++){
		for(j = 1; j <= SIZE_TABLE + 1; j++){
			tabvalue[i][j] = 0;
        }
    }

    srand(time(0)); // Rastgele sayılar için zaman bazlı tohum

    // Mayınları rastgele yerleştir
    for(int i = 0; i < MINE_NUMBER; i++){
        a = 1 + rand() % SIZE_TABLE; // 1 ile 8 arasında rastgele satır
        b = 1 + rand() % SIZE_TABLE; // 1 ile 8 arasında rastgele sütun
        tabvalue[a][b] = -1;         // Mayını yerleştir (mayın -1 ile temsil edilir)
    }

    // Her mayının etrafındaki hücrelerin değerini arttır (komşu hücrelere sayı ekler)
	for(int i = 1; i <= SIZE_TABLE; i++){
        for(j = 1; j <= SIZE_TABLE; j++){
            if(tabvalue[i][j] == -1){  // Eğer hücre mayınsa
				for(k = -1; k < 2; k++){
					for(p = -1; p < 2; p++){
						if(tabvalue[i + k][j + p] != -1){  // Komşu hücre mayın değilse
                            tabvalue[i + k][j + p]++;     // Değerini bir arttır (mayına yakın hücrelerin sayısını artır)
                        }
            		}
				}
			}
		}
    } 
}

// Oyunun başlangıç ekranını hazırlayan fonksiyon
void starting(){
    int i, j;
	puts("");
	for(i = 1; i <= SIZE_TABLE; i++){
		printf("%d  ", i);  // Satır ve sütun numaralarını yazdır
	}
	puts("");
    for(i = 1; i <= SIZE_TABLE; i++){
		printf("---");
	}
	puts("");

    // Tüm tabloyu '#' ile başlat (oyuncunun göreceği tablo)
    for(i = 1; i <= SIZE_TABLE + 1; i++){
		for(j = 1; j <= SIZE_TABLE + 1; j++){
			tab[i][j] = '#';
		}
    }

    // İlk tabloyu yazdır
	for(i = 1; i <= SIZE_TABLE; i++){
		for(j = 1; j <= SIZE_TABLE; j++){
			printf("%c  ", tab[i][j]);
		}
		printf(" |%d", i);	
		puts("");
	}

	for(i = 1; i <= SIZE_TABLE; i++){
		printf("___");
	}

    create_mines();  // Mayınları yerleştir
}

// Oyuncu girdisinden sonra oyunu günceller
void after_starting(){
    int flag = 0, i;
	win = control(); // Oyun kazanılıp kazanılmadığını kontrol eder
    do{
        printf("\nPLEASE ENTER VALUE LIKE THIS (2,2 or 4 6):\n");
        scanf("%d,%d", &row, &column); fflush(stdin); // Oyuncunun girdisini alır
        
        if(tabvalue[row][column] == -1){  // Eğer seçilen hücre mayınsa
            game_over();  // Oyunu kaybettir
            flag = 1;        
            break;        
        }        
        else if(win < 6){  // Eğer kazanılacak koşul sağlandıysa
            game_win();  // Oyunu kazandır
            break;
        }
        else{
            game_continue();  // Oyuncuya tabloyu tekrar göster ve devam et
            continue;
        }
    }while(flag == 1);
}

// Tüm mayınlar bulunmuş mu kontrol eder
int control(){
    int i, j ; 
	int flag1 = 64;  // Oyun alanındaki toplam hücre sayısı
    for(i = 1; i <= SIZE_TABLE + 1; i++){
		for(j = 1; j <= SIZE_TABLE + 1; j++){
            if(tab[i][j] != '#'){  // Eğer hücre açılmışsa
                flag1--;  // Açılmış hücre sayısını azalt
            }
        }
    }
    return flag1;  // Kalan kapalı hücre sayısını döndür
}

// Oyunu kazandıktan sonra ekranı gösteren fonksiyon
void game_win(){
    int i, j;
    puts("");
	for(i = 1; i <= SIZE_TABLE; i++){
		printf("%d  ", i);
	}
	puts("");
	for(i = 1; i <= SIZE_TABLE; i++){
		printf("---");
	}
	puts("");

	// Tüm tabloyu ve mayınları göster
	for(i = 1; i <= SIZE_TABLE; i++){
		for(j = 1; j <= SIZE_TABLE; j++){
            if(tabvalue[i][j] == -1) printf("X  ");  // Mayınları göster
            else printf("%d  ", tabvalue[i][j]);  // Diğer hücrelerdeki sayıları göster
		}
		printf(" |%d", i);	
		puts("");
	}

	for(i = 1; i <= SIZE_TABLE; i++){
		printf("___");
	}

    puts("");
	printf("!!!!YOU WIN!!!!");  // Kazandığını bildir
	puts("");
	puts("");
	again_game();  // Tekrar oynama seçeneği sunar
}

// Oyuncuya tekrar oynamak isteyip istemediğini soran fonksiyon
void again_game(){
	int again;
	int flag2 = 0;
    do{
		printf("DO YOU WANT TO PLAY AGAIN:\n(ENTER '1':YES , ENTER '0':NO)\n");
		scanf("%d", &again);

		if(again == 1){  // Eğer tekrar oynamak isterse oyunu yeniden başlat
			puts(""); puts("");
			flag2 = 1;
			printf("WELCOME TO MY MINESWEEPER GAME: \n");
        	starting();
    		after_starting();
		}
		else if(again == 0){  // Oyunu bitirmek isterse
			flag2 = 1;
			printf("THANK YOU FOR PLAY.");  // Oyunu kapat
			break;
		}
		else{  // Geçersiz girişte tekrar sor
			printf("PLEASE ENTER 1 OR 0 FOR VALID VALUE.");
			continue;
		}
	}while (flag2 == 1);
}

// Oyun kaybedildiğinde çalışan fonksiyon
void game_over(){
    int i, j;
    puts("");
	for(i = 1; i <= SIZE_TABLE; i++){
		printf("%d  ", i);
	}
	puts("");
	for(i = 1; i <= SIZE_TABLE; i++){
		printf("---");
	}
	puts("");

	// Tüm tabloyu ve mayınları göster
	for(i = 1; i <= SIZE_TABLE; i++){
		for(j = 1; j <= SIZE_TABLE; j++){
            if(tabvalue[i][j] == -1) printf("X  ");  // Mayınları göster
            else printf("%d  ", tabvalue[i][j]);  // Diğer hücreleri göster
		}
		printf(" |%d", i);	
		puts("");
	}

	for(i = 1; i <= SIZE_TABLE; i++){
		printf("___");
	}

    puts("");
    printf("!!!GAME OVER!!!");  // Oyuncuya kaybettiğini bildir
	puts("");
	puts("");
	again_game();  // Tekrar oynama seçeneği sunar
}

// Oyunun devam ettiği durumlarda tabloyu günceller
void game_continue(){
    int i, j, a, b;
    tab[row][column] = tabvalue[row][column];  // Oyuncunun seçtiği hücreyi aç
    
    srand(time(0));
    howmany = 1 + rand() % 10;  // Rastgele açılan hücre sayısını belirle
    
    for(int k = 0; k < howmany; k++){
        a = 1 + rand() % 8;
        b = 1 + rand() % 8;
        if(tabvalue[a][b] != -1)  tab[a][b] = tabvalue[a][b];  // Rastgele bazı hücreleri aç
    }

    puts("");
	for(i = 1; i <= SIZE_TABLE; i++){
		printf("%d  ", i);
	}
	puts("");
	for(i = 1; i <= SIZE_TABLE; i++){
		printf("---");
	}
	puts("");

	// Güncellenen tabloyu yazdır
	for(i = 1; i <= SIZE_TABLE; i++){
		for(j = 1; j <= SIZE_TABLE; j++){
            if(tab[i][j] == '#')       printf("%c  ", tab[i][j]);  // Kapalı hücreleri göster
            else if(tab[i][j] == -1)   printf("X  ");  // Mayınları göster
            else                       printf("%d  ", tab[i][j]);  // Diğer hücreleri göster
        }
		printf(" |%d", i);	
		puts("");
	}

	for(i = 1; i <= SIZE_TABLE; i++){
		printf("___");
	}
    after_starting();  // Oyuncuya tekrar girdi yapma şansı ver
}
