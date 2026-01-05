#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5, i;

    // malloc ile dinamik bellek ayırma
    printf("malloc ile bellek ayırma:\n");
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Bellek ayrilamadi.\n");
        return 1;
    }

    // malloc ile ayrılan belleğe değer atama
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // malloc ile ayrılan bellek içeriğini yazdırma
    printf("Malloc ile ayrılan bellek içeriği: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    // calloc ile dinamik bellek ayırma
    printf("\ncalloc ile bellek ayırma:\n");
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Bellek ayrilamadi.\n");
        return 1;
    }

    // calloc ile ayrılan belleğin varsayılan içeriğini yazdırma (hepsi 0)
    printf("Calloc ile ayrılan bellek içeriği: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // realloc ile belleği yeniden boyutlandırma
    printf("\nrealloc ile bellek yeniden boyutlandırma:\n");
    n = 10; // boyutu 10 yapıyoruz
    ptr = (int *)realloc(ptr, n * sizeof(int));
    if (ptr == NULL) {
        printf("Bellek yeniden ayrilamadi.\n");
        return 1;
    }

    // realloc ile genişletilen belleğe yeni değerler atama
    for (i = 5; i < n; i++) {
        ptr[i] = i + 1;
    }

    // realloc ile yeniden boyutlandırılmış bellek içeriğini yazdırma
    printf("Realloc ile yeniden boyutlandırılmış bellek içeriği: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // free ile belleği serbest bırakma
    printf("\nfree ile bellek serbest bırakma:\n");
    free(ptr);
    ptr = NULL; // Pointer'ı NULL yaparak boşta kalmasını engelliyoruz
    printf("Bellek başarıyla serbest bırakıldı.\n");

    return 0;
}
