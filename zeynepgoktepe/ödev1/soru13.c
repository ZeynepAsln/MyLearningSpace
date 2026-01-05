#include <stdio.h>

int main() {
    int toplam_sayfa = 1000;
    int gun = 0;
    int gunluk_sayfa = 10;
    int okunan_sayfa = 0;

    while (okunan_sayfa < toplam_sayfa) {
        okunan_sayfa += gunluk_sayfa;
        gun++;
        gunluk_sayfa += 5;
    }
    
    printf("Yunus, 1000 sayfalık romanı %d günde bitirir.\n", gun);
    
    return 0;
}
