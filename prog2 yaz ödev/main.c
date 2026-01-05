#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DOSYA_BOYUTU 3451
#define UZUNLUK 1000

struct Budget {
    int budget;
    int year;
    char *title;
    char *titletype;
    char *top250;
};

struct Name {
    int runtime;
    int votes;
    double rating;
    char *genre;
    char *title;
    char *directors;
    char *mustsee;
    char *url;
};

struct Budget budgetArray[DOSYA_BOYUTU];
struct Name nameArray[DOSYA_BOYUTU];

void verileri_al(const char *filename);
void yila_gore_siralama(struct Budget *budget, struct Name *name);
void oylara_gore_siralama(struct Budget *budget, struct Name *name);
void genres_yazdir(struct Name *name);
void budgetleri_goster(struct Budget *budget);
void isimleri_yazdir(struct Name *name);
void film_bilgileri_ile_genres(struct Name *name);
void film_bilgileri_detay(struct Budget *budget, struct Name *name, const char *title);
void filmleri_yila_gore_listele(struct Budget *budget, struct Name *name);
void skorlara_gore_filmler(struct Name *name);
void tur_frekansi(struct Name *name);


void verileri_al(const char *filename){
    FILE *fptr;
    char *ayirma;
    int index=0; 

    fptr = fopen(filename, "r");
    if(fptr == NULL){
        printf("couldn't open the folder");
        return 1;
    }

    ayirma = (char*) malloc(UZUNLUK * sizeof(char));
    ayirma[strcspn(ayirma, "\n")] = 0;
    
    while (fgets(ayirma, UZUNLUK, fptr)!=NULL) {
        ayirma[strcspn(ayirma, "\n")] = 0;
        
        char* token = strtok(ayirma ,";");
            if(token != NULL) {
                budgetArray[index].budget = atoi(token);
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                budgetArray[index].title = strdup(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                nameArray[index].title = strdup(budgetArray[index].title); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                budgetArray[index].titletype = strdup(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                nameArray[index].directors = strdup(token); 
            }
            
        token = strtok(NULL,";");
            if(token != NULL) {
                nameArray[index].rating = atof(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                budgetArray[index].year = atoi(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                nameArray[index].genre = strdup(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                nameArray[index].votes = atoi(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                budgetArray[index].top250 = strdup(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                nameArray[index].mustsee= strdup(token); 
            }

        token = strtok(NULL,";");
            if(token != NULL) {
                nameArray[index].url = strdup(token); 
            }

        index++;
    }
        
    free(ayirma);
    fclose(fptr);
}


void budgetList(struct Budget *budget){ 
    for(int i=0; i<DOSYA_BOYUTU; i++){
        printf("%d %s\n", budget[i].budget, budget[i].title);
    }
}
void nameList(struct Name *name){
    for(int i=0; i<DOSYA_BOYUTU; i++){
        printf("%s\n",name[i].title);
    }
}

void genreList(struct Name *name){
    for(int i=0; i<DOSYA_BOYUTU; i++){
        printf("%s %s\n",name[i].genre,name[i].title);
    }
}


void yearSort(struct Budget *budget, struct Name *name){
    for(int i=0; i<DOSYA_BOYUTU; i++){
        for(int j=i+1; j<DOSYA_BOYUTU; j++){
            if(budget[i].year>budget[j].year){
                int tempyear= budget[i].year;
                budget[i].year=budget[j].year;
                budget[j].year=tempyear;

                int tempntitle=name[i].title;
                name[i].title=name[j].title;
                name[j].title=tempntitle;

                int tempbtitle=budget[i].title;
                budget[i].title=budget[j].title;
                budget[j].title=tempbtitle;
            }
        }
    }
}

void yearList(struct Budget *budget, struct Name *name){
    yearsort(budget,name);
    for(int i=0; i<DOSYA_BOYUTU; i++){
        printf("%d %s \n",budget[i].year, name[i].title);
    }
}

void voteSort_and_print(struct Budget *budget, struct Name *name){
    for(int i=0; i<DOSYA_BOYUTU; i++){
       for(int j=i+1; j<DOSYA_BOYUTU; j++){
            if(name[i].votes>name[j].votes){
                int tempvotes= name[i].votes;
                name[i].votes=name[j].votes;
                name[j].votes=tempvotes;

                int tempntitle=name[i].title;
                name[i].title=name[j].title;
                name[j].title=tempntitle;

                int tempbtitle=budget[i].title;
                budget[i].title=budget[j].title;
                budget[j].title=tempbtitle;
            }
        }
    }
    for(int i=0; i<DOSYA_BOYUTU; i++){
        if(name[i].votes!=0){
            printf("%d %s \n",name[i]. votes, name[i].title);
        }
    }
}


void ratingSort_and_print(struct Budget *budget, struct Name *name){
    for(int i=0; i<DOSYA_BOYUTU; i++){
        for(int j=i+1; j<DOSYA_BOYUTU; j++){
            if(name[i].rating>name[j].rating){
                int temprating= name[i].rating;
                name[i].rating=name[j].rating;
                name[j].rating=temprating;

                int tempntitle=name[i].title;
                name[i].title=name[j].title;
                name[j].title=tempntitle;

                int tempbtitle=budget[i].title;
                budget[i].title=budget[j].title;
                budget[j].title=tempbtitle;
            }
        }
    }
    for(int i=0; i<DOSYA_BOYUTU; i++){
        if(name[i].rating!=0){
            printf("%.1lf %s \n",name[i].rating, name[i].title);
        }
    }
}


void movieSearch(struct Budget *budget, struct Name *name, const char *title){
    int i=0;
    int p=0;
    while(i<DOSYA_BOYUTU){
        if(budget[i].title== title){
            printf("Budget: %d \n Title: %c \n Title Type:%c \n Directors:%c \n Rating:%.1lf \n Runtime:%d \n Year:%d \n Genres:%c \n Votes:%d \n top250:%c \n 1001 must see:%c \n URl:%c \n ", budget[i].budget, budget[i],title, budget[i].titletype, name[i].directors, name[i].rating, name[i].runtime, budget[i].year, name[i].genre, name[i].votes, budget[i].top250, name[i].mustsee, name[i].url);
            p++;
            break;
        }
        i++;
    }
    if(p==0){
        printf("Sorry, there isn't any movie with that title.");
    }
    
}

void genres_yazdir(struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
            printf("Film: %s, Tür: %s\n", name[i].title, name[i].genre);
    }
}


void genreFrq(struct Name *name){
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
        free(tempGenre);
    }

    // Türleri ve frekanslarını yazdırır
    for (int i = 0; i < genreIndex; i++) {
        printf("Genre: %s, Count: %d\n", genres[i], genreCount[i]);
        free(genres[i]);  // Belleği serbest bırakır
    }
}



int main() {
    verileri_al("movie.txt"); 
    int islem;

    while (1) {
        printf("\n1-Budget dizisinin listesi\n2-Name dizisinin listesi\n3-Genre (turlerin) listesi\n4-Yillara gore Movie (Filmlerin) Listesi\n5-Skorlara (score) gore Filmlerin Listesi\n6-Tek Bir Filmin Tum Bilgileri\n7-Turlerin Frekansi (sikligi)\n8-Cikis.\n");
        printf("Isleminizi seciniz (1-8): ");

        if (scanf("%d", &islem) != 1) {
            printf("Gecersiz secim!\n");
            while (getchar() != '\n');
            continue;
        }

        switch (islem) {
            case 1:
                budgetleri_goster(budgetArray);
                break;
            case 2:
                isimleri_yazdir(nameArray);
                break;
            case 3:
                genres_yazdir(nameArray);
                break;
            case 4:
                filmleri_yila_gore_listele(budgetArray, nameArray);
                break;
            case 5:
                skorlara_gore_filmler(nameArray);
                break;
            case 6: {
                char filmTitle[UZUNLUK];
                printf("Detaylarini gormek istediginiz filmin ismini giriniz: ");
               // getchar(); // Boşluk karakterini temizlemek için
                fgets(filmTitle, UZUNLUK, stdin);
                //filmTitle[strcspn(filmTitle, "\n")] = '\0'; // newline karakterini sil
                film_bilgileri_detay(budgetArray, nameArray, filmTitle);
                break;
            }
            case 7:
                tur_frekansi(nameArray);
                break;
            case 8:
                printf("Cikiliyor...\n");
                return 0;
            default:
                printf("Hatali Islem!\n");
                break;
        }
    }

    return 0;
}
