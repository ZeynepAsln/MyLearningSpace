#include <iostream>

using namespace std;

long long morsil_deger(long long n) {
    // Morşıl Değeri hesaplamak için verilen bir sayının en büyük tek bölenini bulma
    while (n % 2 == 0) {
        n /= 2;
    }
    return n;
}

int main() {
    long long N;
    cin >> N;

    long long toplam = 0;
    for (long long i = 1; i <= N; i++) {
        toplam += morsil_deger(i);
    }

    cout << toplam << endl;

    return 0;
}






