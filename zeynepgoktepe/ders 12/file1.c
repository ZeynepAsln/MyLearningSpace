#include<stdio.h>
int main(){
    
    FILE *filep = fopen("dosya_adı","mod");

    "w" //eğer masaütünde yoksa yeni dosya oluşturur, varsa siler ve yeni oluşturur
    "r" //eğer öyle bir dosya varsa okumamızı sağlar ve yoksa da boş değer alır
    "a" //var olan dosyayı kaybetmeden dosyanın içindekileri değiştirmeyi sağlar


    return 0;
}