#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

/*
    char ch='A';
    printf("%c\n",ch);
    printf("%d\n",ch);

    char ch2='a';
    printf("%d\n",ch2);

    char ch3= '0';
    printf("%d\n",ch3);

    for(int i=65; i<=90 ;i++){
        printf("%c\n",i);
    }


    printf("%f\n", ceil(4.3)); // 5
    printf("%f\n",floor(4.9)); // 4
    printf("%f\n",sqrt(64)); // 8
    printf("%f\n",pow(8,2)); // 64
    printf("%d\n",abs(-15)); // 15



    int sayılar[5]={10,20,30,40,50};
    printf("%d\n",sayılar[1]);

    char harfler[5]={'A','B','C','D','E'};
    printf("%c\n",harfler[3]);

    float ondalık[4]= {1.1 , 2.2 , 3.3 , 4.4};
    printf("%f\n",ondalık[2]);

    for(int i=0 ; i<5 ; i++){
        printf("%d\n",sayılar[i]);
    } 

    for(int k=0 ; k<5 ; k++){
        printf("%c\n",harfler[k]);
    }

    for(int j=0 ; j<4 ; j++){
        printf("%.1f\n",ondalık[j]);
    }


    int array[5];
        for(int i=0; i<5 ; i++){
            printf("Diziniz %d.elemanını giriniz: ",i+1);
            scanf("%d",&array[i]);
        }

    int k=0;

    while(k<5){
        printf("dizinin %d. elemanı: %d\n",k+1,array[k]);
        k++;
    }


    do{
        printf("dizinin %d.elemanı: %d\n",k+1,array[k]);
        k++;
    }
    while(k<5);
*/

/*
   1 2
   3 4

   int array[2][2];

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            printf("Dizinin %d.satır %d.sütun elemanını giriniz: ", i+1 , j+1);
            scanf("%d",&array[i][j]);
        }
    }

//matris olarak yazdırma 
    for(int a=0 ; a<=1 ;a++){
        for(int b=0 ; b<=1 ; b++){
            printf("%d ",array[a][b]);
        }
    printf("\n");
    }

    for(int c=0 ; c<2 ; c++){
        for(int d=0 ; d<2 ; d++){
            printf("Dizinin %d.satır %d.sütun elemanı: %d\n", c+1,d+1,array[c][d]);
        }
    }

    int array2[2][2]={{1,3},{2,4}};

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            printf("Dizinin %d.satır %d.sütun elemanı: %d\n",i+1,j+1,array2[i][j]);
        }
    }   

    int toplam=0;
    int çarpım=1;

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ;j++){
            //toplam = toplam + array2[i][j];
            toplam += array2[i][j];

            çarpım = çarpım * array2[i][j];
            //çarpım *= array2[i][j];
        }
    }

    printf("Dizinin toplamı : %d\n",toplam);
    printf("Dizinin çarpımı :%d",çarpım);
*/


    //int array3[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};

    int array3[2][2][2];

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            for(int k=0 ; k<2 ; k++){
                printf("Dizinin %d.satır %d.sütun %d.derinlik elemanını giriniz: ",i+1,j+1,k+1);
                scanf("%d",&array3[i][j][k]);
            }
        }
    }

    for(int a=0 ; a<2 ; a++){
        for(int b=0 ; b<2 ;b++){
            for(int c =0 ; c<2 ; c++){
                printf("Dizinin %d.satır %d.sütun %d.derinlik elemanı : %d\n" , a+1 , b+1, c+1,array3[a][b][c]);
            }
        }
    }

//matris olarak yazdırma 
    for(int a=0 ; a<=1 ;a++){
        for(int b=0 ; b<=1 ; b++){
            for(int c=0 ; c<=1 ; c++ ){
                printf("%d ",array3[a][b][c]);
            }
            printf("\n");
        }
        printf ("\n");
    }

    return 0;
} 





