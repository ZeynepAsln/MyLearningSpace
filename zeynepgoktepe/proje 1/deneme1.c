#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Folder_length 3451
#define Row_length 1000

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
struct Budget budgetArray[Folder_length];
//struct Name nameArray[Folder_length];

void verileri_al(const char *filename);
void yearSort(struct Budget *budget, struct Name *name);
void voteSort_and_print(struct Budget *budget, struct Name *name);
void genreList(struct Name *name);
void budgetList(struct Budget *budget);
void nameList(struct Name *name);
void movieSearch(struct Budget *budget, struct Name *name, const char *title);
void yearList(struct Budget *budget, struct Name *name);
void ratingSort_and_print(struct Budget *budget, struct Name *name);
void genreFrq(struct Name *name);


int main(){
    verileri_al("movie.txt");
    int n;
    printf("1-Sort by budget \n 2-Sort by name \n 3-Sort by genre \n 4-Sort by the year \n 5-Sort by the score \n 6-Search a movie \n 7-Genre frequency \n 8-Exit \n Enter an operation(1-8)");
    scanf("%d", &n);

    switch(n){
        case 1:
            budgetList(budgetArray);
        case 2:
            nameList(nameArray);
        case 3:
            genreSort(nameArray);
        case 4:
            yearSort(budgetArray,nameArray);
        case 5:
            scoreList(nameArray);
        case 6:
            char movie_name[50];
            for(int i=0; i<50; i++){
                printf
            }
            movieSearch(fptr);
        case 7:
            genreFrq(fptr);
        case 8:
            printf("You exited");
            exit (0);
        default:
            printf("Please enter a valid operation!");
            break;
    }



}

void verileri_al(const char *filename){
    FILE *fptr;
    char *ayirma;
    int index=0; 

    fptr = fopen(filename, "r");
    if(fptr == NULL){
        printf("couldn't open the folder");
        return 1;
    }

   // ayirma = (char*) malloc(Row_length * sizeof(char));
    ayirma[strcspn(ayirma, "\n")] = 0;
    
    while (fgets(ayirma, Row_length, fptr)!=NULL) {
        //ayirma[strcspn(ayirma, "\n")] = 0;
        
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
    for(int i=0; i<Folder_length; i++){
        printf("%d %s\n", budget[i].budget, budget[i].title);
    }
}
void nameList(struct Name *name){
    for(int i=0; i<Folder_length; i++){
        printf("%s\n",name[i].title);
    }
}

void genreList(struct Name *name){
    for(int i=0; i<Folder_length; i++){
        printf("%s %s\n",name[i].genre,name[i].title);
    }
}


void yearSort(struct Budget *budget, struct Name *name){
    for(int i=0; i<Folder_length; i++){
        for(int j=i+1; j<Folder_length; j++){
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
    for(int i=0; i<Folder_length; i++){
        printf("%d %s \n",budget[i].year, name[i].title);
    }
}

void voteSort_and_print(struct Budget *budget, struct Name *name){
    for(int i=0; i<Folder_length; i++){
        for(int j=i+1; j<Folder_length; j++){
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
    for(int i=0; i<Folder_length; i++){
        if(name[i].votes!=0){
            printf("%d %s \n",name[i]. votes, name[i].title);
        }
    }
}


void ratingSort_and_print(struct Budget *budget, struct Name *name){
    for(int i=0; i<Folder_length; i++){
        for(int j=i+1; j<Folder_length; j++){
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
    for(int i=0; i<Folder_length; i++){
        if(name[i].rating!=0){
            printf("%.1lf %s \n",name[i].rating, name[i].title);
        }
    }
}


void movieSearch(struct Budget *budget, struct Name *name, const char *title){
    int i=0;
    int p=0;
    while(i<Folder_length){
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


void genreFrq(struct Name *name){
    
}