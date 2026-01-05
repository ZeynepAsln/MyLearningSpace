#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[10];
    int kg;
    float price;
    int code;
}product;

void addProduct( FILE *file){
    product product;
    printf("Product name is: ");
    scanf("%s", product.name);
    printf("Product weighs: ");
    scanf("%d", &product.kg);
    printf("Product costs: ");
    scanf("%f", &product.price);
    printf("The product's code is: ");
    scanf("%d", &product.code);


    fprintf(file, "%s %d %.2f %d", product.name, product.kg, product.price, product.code);
    fprintf(file, "\n");
    printf("Product is added! \n");

}

void seeProduct( FILE *file){
    product product;
    rewind(file);
    while(fscanf(file, "%s %d %f %d", product.name, &product.kg, &product.price, &product.code)!= EOF){
        printf("name: %s, weight: %d, product costs: %.2f, product code: %d", product.name, product.kg, product.price, product.code);
        printf("\n");
    }
}
void searchProduct(FILE *file){
    product product;
    int a=0;
    int c;
    printf("Enter the code number: ");
    printf("\n");
    scanf("%d", &c);

    rewind(file);
    while(fscanf(file, "%s %d %f %d", product.name, &product.kg, &product.price, &product.code)!= EOF){

        if(product.code == c){
            printf("name: %s, weight: %d, product costs: %.2f, product code: %d", product.name, product.kg, product.price, product.code);
            printf("\n");
            a++;
            break;
        }
    }
    if(a==0){
        printf("Couldn't find the product");
    }
}

void updateProduct( FILE *file){
    product product;
    int kod;
    printf("Enter the code: ");
    scanf("%d", &kod);
    int a=0;
    long b;

    rewind(file);
    while(!feof(file)){
        b = ftell(file); //file pointer adress gosterir
        if (fscanf(file, "%s %d %f %d", product.name, &product.kg, &product.price, &product.code)==4){
            if(product.code == kod){
                printf("New kg: ");
                scanf("%d", &product.kg);
                printf("\n");
                printf("New price: ");
                scanf("%f", &product.price);
                printf("\n");
                fseek(file, b, SEEK_SET ); //bak
                fprintf(file, "%s %d %.2f %d ", product.name, product.kg, product.price, product.code);
                fprintf(file, "\n");
                printf("Product is updated!");
                printf("\n");
                a++;
                break;
        
            }
        }
    }


    if(a==0){
        printf("Couldn't find the product");
        
    }
}

void deleteProduct( FILE *file){
    product product;
    int kod;
    printf("Enter the code: ");
    scanf("%d", &kod);
    int a=0;

    FILE *new = fopen("new.txt", "w");
    if(file == NULL){
        printf("dosya acilamadi");
        return;
}
    rewind(file);
    while(fscanf(file, "%s %d %f %d", product.name, &product.kg, &product.price, &product.code)!= EOF){
        if(product.code!=kod){
            fprintf(new, "%s %d %.2f %d \n", product.name, product.kg, product.price, product.code);

        }
        else{
            a++;
        }
    }
    fclose(file);
    fclose(new);
    remove("product.txt");
    rename("new.txt", "product.txt");
    if(a==0){
        printf("Couldn't find the product");
        printf("\n");
    }
    else{
        printf("Product is deleted!");
        printf("\n");
    }

}

int main(){
    int a;
    FILE *file;
    while(1){
        printf("1 - add a new product\n");
        printf("2 - see the product info\n");
        printf("3 - search product\n");
        printf("4 - update the product info\n");
        printf("5 - delete a product\n");
        printf("6 - exit");
        printf("\n");
        scanf("%d", &a);

        switch(a){
            case 1:
                file = fopen("product.txt", "a");
                if(file == NULL){
                    printf("dosya acilamadi");
                    return 1;
                }
                addProduct(file);
                fclose(file);
                break;
            case 2:
            file = fopen("product.txt", "r");
            if(file == NULL){
                    printf("dosya acilamadi");
                    return 1;
                }
                seeProduct(file);
                fclose(file);
                break;
            case 3:
            file = fopen("product.txt", "r");
            if(file == NULL){
                    printf("dosya acilamadi");
                    return 1;
                }
                searchProduct(file);
                fclose(file);
                break;
            case 4:
            file = fopen("product.txt", "r+");
            if(file == NULL){
                    printf("dosya acilamadi");
                    return 1;
                }
                updateProduct(file);
                fclose(file);
                break;
            case 5:
            file = fopen("product.txt", "r+");
            if(file == NULL){
                    printf("dosya acilamadi");
                    return 1;
                }
                deleteProduct(file);
                fclose(file);
                break;
            case 6:
                printf("You exited");
                exit (0);
            default:
            printf("Please enter a valid operation!");
            break;

        }

    }
    return 0;
}
