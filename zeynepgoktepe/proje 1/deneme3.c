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
struct Name nameArray[Folder_length];

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
void directorList(struct Name *name);
void runtimeSort(struct Name *name);
void runtimeList(struct Name *name);

int main(){
    verileri_al("movie.txt");
    while(1){
    int n;
    printf(" 1-Sort by budget \n 2-Sort by name \n 3-Sort by genre \n 4-Sort by the year \n 5-Sort by directos \n 6-Sort by the vote \n 7-Sort by the ratings \n 8-Search a movie \n 9-Genre frequency \n 10-Sort by runtime \n 11-Exit \n Enter an operation(1-11) \n");
    scanf("%d", &n);
   
    switch(n){
        case 1:
            budgetList(budgetArray);
            break;
        case 2:
            nameList(nameArray);
            break;
        case 3:
            genreList(nameArray);
            break;
        case 4:
            yearList(budgetArray,nameArray);
            break;
        case 5:
            directorList(nameArray);
            break;
        case 6:
            voteSort_and_print(budgetArray,nameArray);
            break;
        case 7:
            ratingSort_and_print(budgetArray,nameArray);
            break;
        case 8:{
            char movie_name[Row_length];
            getchar();
            printf("Enter a movie name: \n");
            scanf("%[^\n]", movie_name);
            movieSearch(budgetArray,nameArray,movie_name);
            break;
        }
        case 9:
            genreFrq(nameArray);
            break;
        case 10:
            runtimeList(nameArray);
            break;
        case 11:
            printf("You exited");
            exit (0);
        default:
            printf("Please enter a valid operation!");
            break;
    }
    }



}

void verileri_al(const char *filename){
    FILE *fptr;
    char *ayirma;
    int index=0; 

    fptr = fopen(filename, "r");
    if(fptr == NULL){
        printf("couldn't open the folder");
        exit (1);
    }

    ayirma = (char*) malloc(Row_length * sizeof(char));
    ayirma[strcspn(ayirma, "\n")] = 0;
    
    while (fgets(ayirma, Row_length, fptr)!=NULL) {
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
                nameArray[index].runtime = atoi(token); 
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

void directorList(struct Name *name){ 
    for(int i=0; i<Folder_length; i++){
        printf("%s %s\n", name[i].directors, name[i].title);
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


void runtimeSort(struct Name *name){
    for(int i=0; i<Folder_length; i++){
        for(int j=i+1; j<Folder_length; j++){
            if(name[i].runtime>name[j].runtime){
                int tempruntime= name[i].runtime;
                name[i].runtime=name[j].runtime;
                name[j].runtime=tempruntime;

                char* tempntitle=name[i].title;
                name[i].title=name[j].title;
                name[j].title=tempntitle;

               
            }
        }
    }
}
void runtimeList(struct Name *name){
    runtimeSort(name);
    for(int i=0; i<Folder_length; i++){
        printf("%d %s \n",name[i].runtime, name[i].title);
    }
}

void yearSort(struct Budget *budget, struct Name *name){
    for(int i=0; i<Folder_length; i++){
        for(int j=i+1; j<Folder_length; j++){
            if(budget[i].year>budget[j].year){
                int tempyear= budget[i].year;
                budget[i].year=budget[j].year;
                budget[j].year=tempyear;

                char* tempntitle=name[i].title;
                name[i].title=name[j].title;
                name[j].title=tempntitle;

                char* tempbtitle=budget[i].title;
                budget[i].title=budget[j].title;
                budget[j].title=tempbtitle;
            }
        }
    }
}

void yearList(struct Budget *budget, struct Name *name){
    yearSort(budget,name);
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

                char* tempntitle=name[i].title;
                name[i].title=name[j].title;
                name[j].title=tempntitle;

                char* tempbtitle=budget[i].title;
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
                double temprating= name[i].rating;
                name[i].rating=name[j].rating;
                name[j].rating=temprating;

                char* tempntitle=name[i].title;
                name[i].title=name[j].title;
                name[j].title=tempntitle;

                char* tempbtitle=budget[i].title;
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
        if(strcmp(budget[i].title, title) == 0){
            printf("Budget: %d\nTitle: %s\nTitle Type: %s\nDirectors: %s\nRating: %.1lf\nRuntime: %d\nYear: %d\nGenres: %s\nVotes: %d\nTop 250: %s\n1001 Must See: %s\nURL: %s\n", 
       budget[i].budget, budget[i].title, budget[i].titletype, name[i].directors, name[i].rating, 
       name[i].runtime, budget[i].year, name[i].genre, name[i].votes, budget[i].top250, name[i].mustsee, name[i].url);
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
    int size = 0;
    char* arr[Folder_length]= {0};
    int count[Folder_length]= {0};    

    for(int i=0; i<Folder_length; i++){
        char* temp=strdup(name[i].genre);
        char*  genredub= strtok(temp,",");
        while(genredub!= NULL){
        int a=0;
        for(int j=0; j<size; j++){
            
            if(strcmp(genredub, arr[j])==0){
                count[j]+=1;
                a++;
                break;
            
            }
         }
       
        if(a==0){
            arr[size]=strdup(genredub);
            count[size]=1;
            size++;
        }

         
        genredub= strtok(NULL,",");
        }
        free(temp);
    }
        for(int i=0; i<size; i++){
            printf("%s %d \n", arr[i], count[i]);
            free(arr[i]);
        }

    }
