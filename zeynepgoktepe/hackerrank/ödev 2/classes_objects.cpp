#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Student sınıfını tanımlıyoruz
class Student {
private:
    vector<int> scores;  // Öğrencinin puanlarını tutacak bir vektör

public:
    // Öğrenciden 5 puan alacak input fonksiyonu
    void input() {
        for (int i = 0; i < 5; i++) {
            int score;
            cin >> score;  // Kullanıcıdan bir puan girişi al
            scores.push_back(score);  // Puanı scores vektörüne ekle
        }
    }

    // Öğrencinin toplam puanını hesaplayan fonksiyon
    int calculateTotalScore() {
        int total = 0;  // Toplam puanı sıfırdan başlat
        for (int i = 0; i < 5; i++) {            
            total += scores[i];  // Tüm puanları topla
        }
        return total;  // Toplam puanı döndür
    }
};

int main() {
    int n; // Öğrenci sayısı
    cin >> n;  // Kullanıcıdan kaç öğrenci olduğu bilgisini al
    Student *s = new Student[n]; // Dinamik olarak n öğrenci oluştur (array)

    // Her öğrenci için puanları gir
    for(int i = 0; i < n; i++){
        s[i].input();  // Her öğrencinin puanlarını al
    }

    // Kristen'ın toplam puanını hesapla (Kristen ilk öğrenci olarak kabul ediliyor)
    int kristen_score = s[0].calculateTotalScore();

    // Kristen'dan daha yüksek puan alan öğrencileri say
    int count = 0; 
    for(int i = 1; i < n; i++){  // Diğer öğrencilerin puanlarını kontrol et
        int total = s[i].calculateTotalScore();  // Öğrencinin toplam puanını hesapla
        if(total > kristen_score){  // Eğer öğrencinin puanı Kristen'dan yüksekse
            count++;  // Sayacı bir artır
        }
    }

    // Sonucu ekrana yazdır
    cout << count;  // Kristen'dan daha yüksek puan alan öğrenci sayısını yaz
    
    return 0;  // Programın başarılı şekilde sonlandığını belirt
}
