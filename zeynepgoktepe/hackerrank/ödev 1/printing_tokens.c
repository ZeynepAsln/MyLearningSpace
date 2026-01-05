#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // s işaretçisi bir karakter dizisini işaret edecek, bu bellekte 1024 karakterlik yer ayırıyoruz.
    char *s;
    s = malloc(1024 * sizeof(char));  // 1024 karakter uzunluğunda bir bellek tahsis ediyoruz.
    
    // Kullanıcıdan bir satır tam cümle alıyoruz ve s işaretçisine kaydediyoruz.
    scanf("%[^\n]", s);  // Bu format belirleyicisi, kullanıcıdan satırın tamamını boşlukları da alacak şekilde okur.
    
    // realloc kullanarak, diziyi tam olarak cümlenin uzunluğuna göre yeniden boyutlandırıyoruz.
    s = realloc(s, strlen(s) + 1);  // Cümlenin uzunluğuna göre belleği yeniden boyutlandırıyoruz.
    
    // Cümlenin içerisindeki boşlukları '\n' (yeni satır) karakterine çeviriyoruz.
    for (char *c = s; *c != NULL; c++) {  // c işaretçisi ile cümlenin her bir karakterini dolaşıyoruz.
        if (*c == ' ') {  // Eğer karakter bir boşluksa
            *c = '\n';    // O boşluğu yeni satır karakteri ile değiştiriyoruz.
        }
    }
    
    // Değiştirilmiş cümleyi ekrana basıyoruz.
    printf("%s", s);  // s işaretçisinin işaret ettiği karakter dizisini ekrana yazdırıyoruz.
    
    return 0;
}
