#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DOSYA_BOYUTU 3451  // Dosyadaki toplam film sayısı
#define UZUNLUK 1000       // Satır uzunluğu

// Budget yapısı, filmlerin bütçe ve yıl gibi bilgilerini tutuyor
struct Budget {
    int budget;         // Bütçe bilgisi
    int year;           // Yıl bilgisi
    char *title;        // Film başlığı
    char *titletype;    // Film türü (örneğin, belgesel, sinema filmi)
    char *top250;       // IMDb Top 250'de olup olmadığını tutan bilgi
};

// Name yapısı, filmlerin diğer bilgilerini tutuyor
struct Name {
    int runtime;        // Film süresi
    int votes;          // Film için verilen oy sayısı
    double rating;      // IMDb puanı
    char *genre;        // Tür (örneğin, aksiyon, komedi)
    char *title;        // Film başlığı
    char *directors;    // Yönetmen adı
    char *mustsee;      // 1001 must see içinde olup olmadığını tutan bilgi
    char *url;          // IMDb URL bilgisi
};

// Budget ve Name dizilerini DOSYA_BOYUTU boyutunda tanımlıyoruz
struct Budget budgetArray[DOSYA_BOYUTU];
struct Name nameArray[DOSYA_BOYUTU];

// Fonksiyon tanımları
void verileri_al(const char *filename);
void yila_gore_siralama(struct Budget *budget, struct Name *name);
void oylara_gore_siralama(struct Budget *budget, struct Name *name);
void genres_yazdir(struct Name *name);
void budgetleri_goster(struct Budget *budget);
void isimleri_yazdir(struct Name *name);
void film_bilgileri_detay(struct Budget *budget, struct Name *name, const char *title);
void filmleri_yila_gore_listele(struct Budget *budget, struct Name *name);
void skorlara_gore_filmler(struct Name *name);
void tur_frekansi(struct Name *name);

// Verileri dosyadan okuma fonksiyonu
void verileri_al(const char *filename) {
    FILE *file = fopen(filename, "r");  // Dosyayı okuma modunda açar
    if (file == NULL) {  // Dosya bulunamazsa hata verir
        printf("Dosya bulunamadi!\nCikiliyor..\n");
        exit(1);  // Programdan çıkar
    }

    int movieIndex = 0;  // Film dizisi için index
    char *ayirma_islemi = (char *)malloc(sizeof(char) * UZUNLUK);  // Satırı depolamak için hafıza ayırır
    ayirma_islemi[strcspn(ayirma_islemi, "\n")] = 0;  // Satır sonu karakterini kaldırır

    while (fgets(ayirma_islemi, UZUNLUK, file) != NULL) {  // Dosyadan satır satır okuma
        if (movieIndex >= DOSYA_BOYUTU) {  // Dizi boyutunu aşarsa döngüyü kırar
            printf("Exceeded the maximum number of movies.\n");
            break;
        }

        ayirma_islemi[strcspn(ayirma_islemi, "\n")] = 0;  // Satır sonu karakterini temizler

        // Satırı belirli ayırıcıya göre bölme işlemi
        char *token;
        token = strtok(ayirma_islemi, ";");
        if (token != NULL) {
            budgetArray[movieIndex].budget = atoi(token);  // Bütçeyi integer'a çevirip kaydeder
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            budgetArray[movieIndex].title = strdup(token);  // Başlığı belleğe kopyalar
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            nameArray[movieIndex].title = strdup(budgetArray[movieIndex].title);  // Başlıkları eşleştirir
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            budgetArray[movieIndex].titletype = strdup(token);  // Film türü
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            nameArray[movieIndex].rating = atof(token);  // IMDb puanını double'a çevirir
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            nameArray[movieIndex].runtime = atoi(token);  // Film süresi
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            budgetArray[movieIndex].year = atoi(token);  // Yılı integer'a çevirir
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            nameArray[movieIndex].votes = atoi(token);  // Oy sayısı integer'a çevrilir
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            budgetArray[movieIndex].top250 = strdup(token);  // IMDb Top 250 bilgisi
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            nameArray[movieIndex].mustsee = strdup(token);  // 1001 must see bilgisi
        }

        token = strtok(NULL, ";");
        if (token != NULL) {
            nameArray[movieIndex].url = strdup(token);  // URL bilgisi
        }

        // Genre kısmı
        token = strtok(NULL, ";");
        if (token != NULL) {
            nameArray[movieIndex].genre = strdup(token);  // Tür bilgisi
        } else {
            nameArray[movieIndex].genre = strdup("Unknown");  // Eğer boşsa "Unknown" kaydedilir
        }

        token = strtok(NULL, ",");
        if (token != NULL) {
            nameArray[movieIndex].directors = strdup(token);  // Yönetmen bilgisi
        }

        movieIndex++;  // Sonraki filme geçiş
    }

    fclose(file);  // Dosya kapatılır
    free(ayirma_islemi);  // Bellek serbest bırakılır
}

// Filmleri yıla göre sıralayan fonksiyon
void yila_gore_siralama(struct Budget *budget, struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        int max_year = budget[i].year;  // Mevcut maksimum yıl
        int max_index = i;

        for (int j = i + 1; j < DOSYA_BOYUTU; j++) {
            if (budget[j].year < max_year) {  // Daha küçük bir yıl bulursa
                max_year = budget[j].year;
                max_index = j;
            }
        }

        // Budget ve Name dizilerindeki elemanların yerini değiştirir
        struct Budget tokenBudget = budget[i];
        struct Name tokenName = name[i];

        budget[i] = budget[max_index];
        name[i] = name[max_index];

        budget[max_index] = tokenBudget;
        name[max_index] = tokenName;
    }
}

// Filmleri oy sayısına göre sıralayan fonksiyon
void oylara_gore_siralama(struct Budget *budget, struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        int max_votes = name[i].votes;
        int max_index = i;

        for (int j = i + 1; j < DOSYA_BOYUTU; j++) {
            if (name[j].votes > max_votes) {  // Daha fazla oyu varsa yer değiştirir
                max_votes = name[j].votes;
                max_index = j;
            }
        }

        struct Budget tempBudget = budget[i];
        struct Name tempName = name[i];

        budget[i] = budget[max_index];
        name[i] = name[max_index];

        budget[max_index] = tempBudget;
        name[max_index] = tempName;
    }

    // Oy sayılarını yazdır
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        if (name[i].votes == 0) continue;  // Oyu 0 olanları atla
        printf("%d (votes): %s\n", name[i].votes, name[i].title);
    }
}

// Türleri (genre) yazdıran fonksiyon
void genres_yazdir(struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        if (name[i].genre != NULL && strlen(name[i].genre) > 0) {
            printf("Film: %s, Tür: %s\n", name[i].title, name[i].genre);
        }
    }
}

// Budget dizisini yazdıran fonksiyon
void budgetleri_goster(struct Budget *budget) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        printf("%d: %s\n", budget[i].budget, budget[i].title);
    }
}

// Film isimlerini yazdıran fonksiyon
void isimleri_yazdir(struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        printf("%s\n", name[i].title);
    }
}

// Yıllara göre filmleri listeleyen fonksiyon
void filmleri_yila_gore_listele(struct Budget *budget, struct Name *name) {
    yila_gore_siralama(budget, name);  // Önce filmleri yıla göre sıralar
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        printf("%d: %s\n", budget[i].year, name[i].title);
    }
}

// IMDb puanına göre filmleri listeleyen fonksiyon
void skorlara_gore_filmler(struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        printf("%.1lf: %s (%d)\n", name[i].rating, name[i].title, budgetArray[i].year);
    }
}

// Bir filmin tüm bilgilerini detaylı şekilde yazdıran fonksiyon
void film_bilgileri_detay(struct Budget *budget, struct Name *name, const char *title) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        if (strcmp(name[i].title, title) == 0) {  // Filmi başlığına göre bulur
            printf("\nTitle: %s\n", name[i].title);
            printf("Type: %s\n", budget[i].titletype);
            printf("Genres: %s\n", name[i].genre);
            printf("Directors: %s\n", name[i].directors);
            printf("IMDB Rating: %.1lf\n", name[i].rating);
            printf("(%d Votes)\n", name[i].votes);
            printf("Top 250: %s\n", budget[i].top250);
            printf("Year: %d\n", budget[i].year);
            printf("Budget: %d\n", budget[i].budget);
            printf("Runtime: %d\n", name[i].runtime);
            printf("1001 Must See: %s\n", name[i].mustsee);
            printf("URL: %s\n", name[i].url);
            return;  // Bilgileri bulduktan sonra fonksiyondan çıkar
        }
    }
    printf("Film bulunamadi.\n");  // Eğer film bulunamazsa mesaj gösterir
}

// Türlerin frekansını hesaplayan ve yazdıran fonksiyon
void tur_frekansi(struct Name *name) {
    int genreCount[DOSYA_BOYUTU] = {0};  // Türlerin sayısını tutar
    char *genres[DOSYA_BOYUTU];  // Tür isimlerini tutar
    int genreIndex = 0;

    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        char *tempGenre = strdup(name[i].genre);  // Orijinal dizeyi değiştirmemek için kopya oluştur
        char *token = strtok(tempGenre, ",");  // Türleri virgüle göre ayırır
        while (token != NULL) {
            int exists = 0;
            for (int j = 0; j < genreIndex; j++) {
                if (strcmp(token, genres[j]) == 0) {  // Tür zaten varsa sayısını artırır
                    genreCount[j]++;
                    exists = 1;
                    break;
                }
            }
            if (!exists) {  // Yeni bir türse ekler
                genres[genreIndex] = strdup(token);
                genreCount[genreIndex]++;
                genreIndex++;
            }
            token = strtok(NULL, ",");  // Bir sonraki türü kontrol eder
        }
        free(tempGenre);  // Kopyayı serbest bırakır
    }

    // Türleri ve frekanslarını yazdırır
    for (int i = 0; i < genreIndex; i++) {
        printf("Genre: %s, Count: %d\n", genres[i], genreCount[i]);
        free(genres[i]);  // Belleği serbest bırakır
    }
}

// Ana program döngüsü
int main() {
    verileri_al("movie.txt");  // Verileri dosyadan okur
    int islem;

    while (1) {
        // Kullanıcıdan işlem seçmesini ister
        printf("\n1-Budget dizisinin listesi\n2-Name dizisinin listesi\n3-Genre (turlerin) listesi\n4-Yillara gore Movie (Filmlerin) Listesi\n5-Skorlara (score) gore Filmlerin Listesi\n6-Tek Bir Filmin Tum Bilgileri\n7-Turlerin Frekansi (sikligi)\n8-Cikis.\n");
        printf("Isleminizi seciniz (1-8): ");

        if (scanf("%d", &islem) != 1) {  // Geçersiz bir girdi kontrolü
            printf("Gecersiz secim!\n");
            while (getchar() != '\n');  // Buffer temizleme
            continue;
        }

        // Kullanıcının seçimine göre işlem yapılır
        switch (islem) {
            case 1:
                budgetleri_goster(budgetArray);  // Budget dizisini yazdırır
                break;
            case 2:
                isimleri_yazdir(nameArray);  // Name dizisini yazdırır
                break;
            case 3:
                genres_yazdir(nameArray);  // Türleri yazdırır
                break;
            case 4:
                filmleri_yila_gore_listele(budgetArray, nameArray);  // Yıllara göre filmleri listeler
                break;
            case 5:
                skorlara_gore_filmler(nameArray);  // IMDb puanına göre filmleri listeler
                break;
            case 6: {
                // Tek bir filmin tüm bilgilerini yazdırır
                char filmTitle[UZUNLUK];
                printf("Detaylarini gormek istediginiz filmin ismini giriniz: ");
                getchar();  // Boşluk karakterini temizler
                fgets(filmTitle, UZUNLUK, stdin);  // Film başlığını alır
                filmTitle[strcspn(filmTitle, "\n")] = '\0';  // newline karakterini siler
                film_bilgileri_detay(budgetArray, nameArray, filmTitle);
                break;
            }
            case 7:
                tur_frekansi(nameArray);  // Tür frekanslarını hesaplar ve yazdırır
                break;
            case 8:
                printf("Cikiliyor...\n");
                return 0;  // Programdan çıkar
            default:
                printf("Hatali Islem!\n");  // Geçersiz işlem girildiyse uyarı verir
                break;
        }
    }

    return 0;
}
