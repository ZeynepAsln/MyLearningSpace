#include <stdio.h>

int main() {

    int matris1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
 
    int matris2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    

    int toplam[3][3];
    
    // Matrislerin toplamını hesapla
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            toplam[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
    
    // Sonucu ekrana yazdır
    printf("Matrislerin Toplamı:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", toplam[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
