#include <stdio.h>
#include <stdlib.h>

//fibonacci serisi

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);     // fibonacci(1) + fibonacci(0) = 1 + 0 = 1    n=2
                                                    // fibonacci(2) + fibonacci(1) = 1 + 1 = 2  n=3
                                                    // fibonacci(3) + fibonacci(2) = 2 + 1 = 3  n = 4
                                                    // fibonacci(4) + fibonacci(3) = 3 + 2 = 5
                                                    // fibonacci(5) + fibonacci(4) = 5 + 3 = 8
                                                    // fibonacci(6) + fibonacci(5) = 8 + 5 = 13
                                                    // fibonacci(7) + fibonacci(6) = 13 + 8 = 21
                                                    // fibonacci(8) + fibonacci(7) = 21 + 13 = 34
                                                    // fibonacci(9) + fibonacci(8) = 34 + 21 = 55
                                                    // fibonacci(10) + fibonacci(9) = 55 + 34 = 89
                                                    // fibonacci(11) + fibonacci(10) = 89 + 55 = 144
                                                    // fibonacci(12) + fibonacci(11) = 144 + 89 = 233
                                                    // fibonacci(13) + fibonacci(12) = 233 + 144 = 377
                                                    // fibonacci(14) + fibonacci(13) = 377 + 233 = 610 
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){  
        printf("%d ", fibonacci(i));
    }
    return 0;
}


//------------------------------------------------------------------------------------------------------------------------------------------------
//recursive fonksiyonsuz fibonacci serisi
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int a=0, b=1, c;
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d ", a);
        }
        else if(i==1){
            printf("%d ", b);
        }
        else{
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }
    }
    return 0;
}



#include <stdio.h>
#include <string.h>

// Recursive fonksiyon: kelimeyi ters çevir
void tersCevir(char* str, int start, int end) {
    char temp;
    if (start >= end) {
        return;
    }
    // Karakterleri değiştir
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Bir sonraki karakterlere geç
    tersCevir(str, start + 1, end - 1);
}

int main() {
    char kelime[100];
    
    // Kullanıcıdan bir kelime iste
    printf("Bir kelime giriniz: ");
    scanf("%s", kelime);
    
    // Kelimeyi ters çevir
    tersCevir(kelime, 0, strlen(kelime) - 1);
    
    // Sonucu ekrana yazdır
    printf("Tersine çevrilmiş kelime: %s\n", kelime);
    
    return 0;
}
