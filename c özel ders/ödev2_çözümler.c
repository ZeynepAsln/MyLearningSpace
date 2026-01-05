//1. problem

/*
#include <stdio.h>

int main() {
    int array[5];
    int temp;

    // Kullanıcıdan değer al
    for (int i = 0; i < 5; i++) {
        printf("Arrayin %d. elemanını girin: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Küçükten büyüğe sıralama (Bubble Sort)
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Sıralanmış array'i yazdır
    printf("Sıralanmış array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
*/

//2.problem

/*
#include <stdio.h>

int main() {
    int num;
    printf("Bir sayı girin: ");
    scanf("%d", &num);

    int oddArray[num], evenArray[num];
    int oddCount = 0, evenCount = 0;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            evenArray[evenCount++] = i;
        } else {
            oddArray[oddCount++] = i;
        }
    }

    printf("Çift sayılar: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }
    
    printf("\nTek sayılar: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }

    return 0;
}

*/


//3.problem

/*
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("5 basamaklı bir sayı girin: ");
    scanf("%d", &num);

    int ones = num % 10;
    int tens = (num / 10) % 10;
    int hundreds = (num / 100) % 10;
    sum = ones + tens + hundreds;

    printf("Birler, onlar ve yüzler basamağındaki sayıların toplamı: %d\n", sum);
    return 0;
}

*/


//4.problem

/*
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Bir sayı girin: ");
    scanf("%d", &num);

    originalNum = num;

    // Basamak sayısını bul
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Armstrong sayısı olup olmadığını kontrol et
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    if ((int)result == num) {
        printf("%d bir Armstrong sayısıdır.\n", num);
    } else {
        printf("%d bir Armstrong sayısı değildir.\n", num);
    }

    return 0;
}

*/

//5. problem

/*
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Bir sayı girin: ");
    scanf("%d", &num);

    originalNum = num;

    // Sayıyı ters çevir
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Palindrome olup olmadığını kontrol et
    if (originalNum == reversedNum) {
        printf("%d bir palindrome sayıdır.\n", originalNum);
    } else {
        printf("%d bir palindrome sayı değildir.\n", originalNum);
    }

    return 0;
}
*/



//6.problem

/*
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Bir sayı girin: ");
    scanf("%d", &num);

    // Mükemmel sayı kontrolü
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d bir mükemmel sayıdır.\n", num);
    } else {
        printf("%d bir mükemmel sayı değildir.\n", num);
    }

    return 0;
}
*/


//problem 7


/*
#include <stdio.h>

int main() {
    int pagesPerDay = 10;
    int totalPages = 1000;
    int days = 0;
    int pagesRead = 0;

    while (pagesRead < totalPages) {
        pagesRead += pagesPerDay;
        pagesPerDay += 5;
        days++;
    }

    printf("Yunus romanı %d günde bitirir.\n", days);
    return 0;
}
*/


//8.problem

/*
#include <stdio.h>

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];

    // Kullanıcıdan ilk matrisin elemanlarını al
    printf("Birinci matrisin elemanlarını girin:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Kullanıcıdan ikinci matrisin elemanlarını al
    printf("İkinci matrisin elemanlarını girin:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrisleri toplama
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Sonuç matrisini yazdırma
    printf("Matrislerin toplamı:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


//9. problem

/*
#include <stdio.h>

// Fonksiyon tanımı
int karesi_al(int num) {
    return num * num;
}

int main() {
    int num;
    printf("Bir sayı girin: ");
    scanf("%d", &num);

    int result = karesi_al(num);
    printf("%d sayısının karesi: %d\n", num, result);

    return 0;
}

*/


//10.problem

/*
#include <stdio.h>

// Fonksiyon tanımı
int karesi_al(int num) {
    return num * num;
}

int main() {
    int num;
    printf("Bir sayı girin: ");
    scanf("%d", &num);

    int result = karesi_al(num);
    printf("%d sayısının karesi: %d\n", num, result);

    return 0;
}
*/