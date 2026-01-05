#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define isim_n 10

typedef struct{
    char isim[isim_n];
    char soyisim[isim_n];
    char numara[isim_n];
}rehber;

void kisi_ekle(FILE *file){
    rehber rehber;
    printf("isim: ");
    scanf("%s", rehber.isim);
    printf("soyisim: ");
    scanf("%s", rehber.soyisim);
    printf("numara: ");
    scanf("%s", rehber.numara);

    fprintf(file, "\n"); 
    fprintf(file, "%s %s %s", rehber.isim, rehber.soyisim, rehber.numara);
    fprintf(file, "\n");  
    printf("kisi eklendi! ");
}

void rehber_goruntule(FILE *file){
    rehber rehber;
    rewind(file);
    while(fscanf(file, "%s %s %s", rehber.isim, rehber.soyisim, rehber.numara)!= EOF){
        printf("isim: %s, soyisim: %s, numara: %s", rehber.isim, rehber.soyisim, rehber.numara);
        printf("\n");
    }

}

void kisi_ara(FILE *file){
    rehber rehber;
    int b=0;
    char ad[isim_n];
    printf("adi gir: ");
    scanf("%s", ad);

    rewind(file);
    while(fscanf(file, "%s %s %s", rehber.isim, rehber.soyisim, rehber.numara)!= EOF){
    if(strcmp(ad, rehber.isim)==0){
        printf("isim: %s, soyisim: %s, numara: %s", rehber.isim, rehber.soyisim, rehber.numara);
        b++;
        break;
    }
    }

    if(b==0){
        printf("kisi bulunamadi");
    }
}

void kisi_guncelle(FILE *file){
    rehber rehber;
    char ad[isim_n];
    printf("adi gir: ");
    scanf("%s", ad);
    int b = 0;
    long x;

    rewind(file);
    while(!feof(file)){
        x =ftell(file);// file pointer adress
        if(fscanf(file, "%s %s %s", rehber.isim, rehber.soyisim, rehber.numara)==3){
            if(strcmp(ad, rehber.isim)==0){
                printf("yeni bir tel no:" );
                scanf("%s", rehber.numara);
                fseek(file, x, SEEK_SET);
                fprintf(file, "\n"); 
                fprintf(file, "%s %s %s", rehber.isim, rehber.soyisim, rehber.numara);
                fprintf(file, "\n"); 
                printf("kisi guncelledi");
                b++;
                break;
            } 
        }
    }

    if (b==0){
        printf("kisi bulunamadi");
        return;
    }
}

void kisi_sil(FILE *file){
    rehber rehber;
    char ad[isim_n];
    printf("adi gir: ");
    scanf("%s", ad);
    int b = 0;
    FILE *temp;

    temp = fopen("temp.txt", "w");
    
    if(temp==NULL){
        printf("dosya olusmadi");
        return ;
    }

    rewind(file);
    while(fscanf(file, "%s %s %s", rehber.isim, rehber.soyisim, rehber.numara)!= EOF){
        if (strcmp(ad, rehber.isim)!=0){
            fprintf(temp, "%s %s %s", rehber.isim, rehber.soyisim, rehber.numara);
        }
        else{
            b++;
        }
    }

    fclose(file);
    fclose(temp);

    remove("rehber.txt");
    rename("temp.txt", "rehber.txt");

    if(b==0){
        printf("kisi bulinamadi");
    }
    else{
        printf("kisi basariyla silindi");
    }
}

int main(){
    int islem;
    FILE *file;

    while(1){
        printf("\n\n");
        printf("1- kisi ekle\n");
        printf("2- rehber goruntule\n");
        printf("3- kisi ara\n");
        printf("4- kisi guncelle\n");
        printf("5- kisi sil\n");
        scanf("%d", &islem);

        switch(islem){
            case 1:
                file = fopen("rehber.txt","a");
                if(file == NULL){
                    printf("dosya acilmadi");
                    return 1;
                }
                kisi_ekle(file);
                fclose(file);
                break;
            case 2:
                file = fopen("rehber.txt","r");
                if(file == NULL){
                    printf("dosya acilmadi");
                    return 1;
                }
                rehber_goruntule(file);
                fclose(file);
                break;
            case 3:
                file = fopen("rehber.txt","r");
                if(file == NULL){
                    printf("dosya acilmadi");
                    return 1;
                }
                kisi_ara(file);
                fclose(file);
                break;
            case 4:
                file = fopen("rehber.txt","r+");
                if(file == NULL){
                    printf("dosya acilmadi");
                    return 1;
                }
                kisi_guncelle(file);
                fclose(file);
                break;
            case 5:
                file = fopen("rehber.txt","r+");
                if(file == NULL){
                    printf("dosya acilmadi");
                    return 1;
                }
                kisi_sil(file);
                fclose(file);
                break;
            default:
                printf("gecerli bir sayi gir!");
                break;
        }
    }

    return 0;
}