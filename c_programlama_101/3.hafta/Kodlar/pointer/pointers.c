#include <stdio.h>

int main() {

    //tanımlama
    int x = 5;
    int *ptr = &x;

    printf("x'in adresi: %p\n", &x);
    printf("ptr'nin tuttuğu adres: %p\n", ptr);
    printf("ptr'nin gösterdiği değer: %d\n", *ptr);


//----------------------------------------------

    
    return 0;
}
