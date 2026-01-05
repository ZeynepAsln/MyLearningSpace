#include <stdio.h>

void degerArttir(int *p) {
    (*p)++;
}


/*Fonksiyonlarda pointer kullanarak bir değişkenin adresini 
gönderebilir ve o değişken üzerinde doğrudan değişiklik yapabilirsiniz.
Bu, özellikle büyük veriler veya diziler için önemlidir, çünkü kopyalamak 
yerine adres göndermek performans sağlar.
*/

int main() {
    int x = 5;
    degerArttir(&x);
    printf("x'in yeni değeri: %d\n", x); // x'in değeri 6 olur

    return 0;
}
