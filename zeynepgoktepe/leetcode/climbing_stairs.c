int climbStairs(int n){
    // 'dp' isimli bir dizi oluşturuluyor ve dinamik bellek tahsisi yapılıyor. 
    // Dizi, n+2 eleman içerecek şekilde calloc ile bellekte sıfırlanıyor.
    int* dp = calloc(n + 2, sizeof(int));  // (n+2 elemanlık yer ayırıp sıfırla)
    
    // İlk basamağa çıkmanın tek yolu vardır, bu yüzden dp[1] = 1
    dp[1] = 1;
    
    // İkinci basamağa çıkmanın iki yolu vardır, ya iki adım birden ya da iki defa birer adım, bu yüzden dp[2] = 2
    dp[2] = 2;
    
    // 3. basamaktan n. basamağa kadar olan basamaklara ulaşmanın yollarını hesaplayan döngü
    for (int i = 3; i <= n; i++) {
        // Bir basamağa ulaşmanın iki ana yolu vardır:
        // 1. Önceki (i-1) basamaktan bir adım atarak
        // 2. İki önceki (i-2) basamaktan iki adım atarak
        // Bu nedenle dp[i] = dp[i-1] + dp[i-2]
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // Sonuç olarak dp[n]'de tutulan değeri alıyoruz, bu n. basamağa çıkmanın toplam yol sayısını verir
    int result = dp[n];
    
    // Dinamik olarak ayırdığımız bellek 'free' ile serbest bırakılır
    free(dp);

    // Hesaplanan sonuç geri döndürülür
    return result;
}
