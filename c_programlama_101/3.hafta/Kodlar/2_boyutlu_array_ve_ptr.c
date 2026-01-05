#include <stdio.h>

int main() {
    int matris[2][3] = { {1, 2, 3}, {4, 5, 6} }; // 2x3 boyutlu bir matris tanımlıyoruz

    // Normal şekilde matris elemanlarına erişim
    printf("Normal Erişim:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matris[%d][%d] = %d\n", i, j, matris[i][j]);
        }
    }

    // Pointer ile matris elemanlarına erişim
    printf("\nPointer ile Erişim:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("*(matris[%d] + %d) = %d\n", i, j, *(matris[i] + j));
        }
    }


    return 0;
}



