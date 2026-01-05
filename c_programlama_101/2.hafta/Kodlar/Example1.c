//Faktöryel hesaplama

#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi){
    int sonuc = 1;
    for(int i = 1; i <= sayi; i++){
        sonuc *= i;
    }
    return sonuc;
}

int main(){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    printf("Faktoriyel: %d\n", faktoriyel(sayi));
    return 0;
}