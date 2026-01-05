#include<stdio.h>
#include<stdlib.h>

void printHello();   //Parametresiz fonksiyon tanımlama
void printNumber(int number);   //Parametreli fonksiyon tanımlama
int add(int a, int b);   //Parametreli geri dönüşlü fonklsiyon tanımlama
int sabitsayi();   //Geri dönüşlü parametresiz fonksiyon tanımlama
void kareAl(int sayi);   //parametreli işlem yapmak için kullanılan fonksiyon
void deneme(int sayi);   //değer değiştirme fonksiyonu

int main(){
    printHello();

    int number = 5;
    printNumber(number);

    int result = add(5, 10);
    printf("Result: %d\n", result);

    printf("Sabit sayi: %d\n", sabitsayi());
    
    kareAl(number);


    int num2 = 10;
    deneme(num2);  //fonksiyonun içinde değer değişse bile dışarıya etkisi olmaz.
    printf("Num2: %d\n", num2);


    
    return 0;
}

void printHello(){   //Parametresiz bir fonksiyon tanımlama
    printf("Hello\n");
}

void printNumber(int number){   //Parametreli bir fonksiyon tanımlama
    printf("Number: %d\n", number);
}

int add(int a, int b){   //Parametreli geri dönüşlü fonklsiyon tanımlama
    return a + b;
}

int sabitsayi(){   //Geri dönüşlü parametresiz fonksiyon tanımlama
    return 42;
}

void kareAl(int sayi) {    //parametreli işlem yapmak için kullanılan fonksiyon
    printf("Sonuç: %d\n", sayi * sayi);
}

void deneme(int sayi) {    //değer değiştirme fonksiyonu
    sayi = 20;
    printf("Sayi: %d\n", sayi);
}