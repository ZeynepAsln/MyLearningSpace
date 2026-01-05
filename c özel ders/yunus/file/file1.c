#include<stdio.h>
int main(){
/*
    FİLE *filep = fopen("dosya_adi","mod");
    "w"// eğer masaüstünde yoksa dosya oluşturur varsa siler ve yeni oluşturur
    "r"//eğer öyle bi dosya varsa okumamızı sağlar yoksa boş değer alır
    "a"//var olan dosyayı kaybetmeden dosyanın içindekileri değiştirmeyi sağlar
*/

/*
    FILE *filep = fopen("yazilimbilimi.txt","w");
    if(filep == NULL){
        printf("dosya oluşturulamadı");
    }
    else{
        printf("dosya oluşturuldu");
    }
*/

    FILE *filep = fopen("yazilimbilimi.txt","r");
    if(filep==NULL){
        printf("öyle bir dosya yok");
    }
    else{
        printf("dosya var");
    }

    return 0;
}
