#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
/*
    int array[2][2]; 

    for(int i=0; i<2 ; i++ ){
        for(int j=0 ; j<2 ; j++){
            printf("Dizinin %d.satır %d.sütun elemanını giriniz: ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }

 //matris olarak yazdırma
    for(int a=0;a<=1;a++){
        for(int b=0;b<2;b++){
            printf("%d ",array[a][b]);
        }
        printf("\n");
    } 

    for(int c=0;c<2 ; c++){
        for(int d=0 ; d<2 ; d++){
            printf("Dizinin %d.satır %d.sütun elemanı: %d\n",c+1,d+1,array[c][d]);
        }
    }
*/

/*
    int array2[2][2]={{1,2},{3,4}}; 

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d.satır %d.sütun elemanı= %d\n",i+1,j+1,array2[i][j]);
        }
    }

    for(int a=0;a<=1;a++){
        for(int b=0;b<=1;b++){
            printf("%d ",array2[a][b]);
        }
        printf("\n");
    }

    int toplam=0;
    int çarpım=1;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            //toplam = toplam + array2[i][j];
            toplam+= array2[i][j];
            çarpım*=array2[i][j];
        }
    }

    printf("dizinin toplamı= %d\n",toplam);
    printf("dizinin çarpımı = %d",çarpım);

   
    int array3[2][2][2];
    for(int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            for(int z=0;z<2;z++){
               printf("%d.satır %d.sütun %d.derinlik elemanını giriniz: ",x+1,y+1,z+1);
               scanf("%d",&array3[x][y][z]);
            }
        }
    }

    for(int a=0;a<2;a++){
        for(int b=0;b<2;b++){
            for(int c=0;c<2;c++){
                printf("%d ",array3[a][b][c]);
            }
            printf("\n");
        }
        printf("\n");
    }
*/
/*
    //strlen fonksiyonu
    char isim[]="zeynep";
    printf("%d",strlen(isim));
    //uzunluk bulur


    //strcpy fonksiyonu
    char isim2[]="zeynep";
    char isim3[];
    strcpy(isim3,isim2);
    printf("%s",isim3);
    //metni kopyalar


    //strncpy fonksiyonu
    char isim4[]="zeynep";
    char isim5[10];
    printf("%s",strncpy(isim5,isim4,3));
    //zey


    //gets fonksiyonu
    char isim6[20];
    printf("isminizi giriniz: ");

      
    //for(int i=0;i<20 ;i++){
    //    scanf("%d",isim6[i]);
    //}
    
    gets(isim6);


    //fgets fonksiyonu
    char isim7[20];
    printf("isminizi giriniz: ");

    //for(int i=0;i<5;i++){
        //scanf("%d",isim7[i]);
    //}

    fgets(isim7,5,stdin);


    //strrev fonksiyonu
    char isim8[]="merhaba";
    printf("%s",strrev(isim8));
    //abahrem


    //strupr fonksiyonu
    char isim9[]="merhaba";
    printf("%s",strupr(isim9));
    //küçük harfleri büyük harfe çevirir  - MERHABA


    //strlwr fonksiyonu
    char isim10[]="MERHABA";
    printf("%s",strlwr(isim10)); 
    //büyük harfleri küçük harfe çevirir - merhaba

*/


    char array[]="merhaba dünya";
    array[0]='n';
    printf("%s\n",array);


    return 0;
}