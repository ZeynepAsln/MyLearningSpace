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


int main(){




    
}
