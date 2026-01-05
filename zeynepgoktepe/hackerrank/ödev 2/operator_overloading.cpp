#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {
public:
    vector<vector<int>> a;  // Matrisi temsil eden 2 boyutlu vektör (a)

    // '+' operatörünü yeniden tanımlayan fonksiyon
    Matrix operator+(const Matrix& other) {
        Matrix result;  // Sonucu tutacak yeni bir matris
        int n = a.size();  // Satır sayısını al
        int m = a[0].size();  // Sütun sayısını al
        
        // İki matrisi toplamak için döngü
        for (int i = 0; i < n; i++) {
            vector<int> row;  // Yeni satırı oluştur
            for (int j = 0; j < m; j++) {
                // Aynı indeksteki elemanları topla ve satıra ekle
                row.push_back(a[i][j] + other.a[i][j]);
            }
            result.a.push_back(row);  // Sonuç matrisine bu satırı ekle
        }
        
        return result;  // Sonuç matrisini döndür
    }
};

int main () {
   int cases, k;
   cin >> cases;  // Kaç tane test vakası olduğunu oku
   for (k = 0; k < cases; k++) {
      Matrix x;  // İlk matrisi tanımla
      Matrix y;  // İkinci matrisi tanımla
      Matrix result;  // Toplam sonucu tutacak matris
      int n, m, i, j;
      cin >> n >> m;  // Matrisin satır (n) ve sütun (m) sayısını oku

      // İlk matrisin elemanlarını oku
      for (i = 0; i < n; i++) {
         vector<int> b;  // Her satır için geçici bir vektör
         int num;
         for (j = 0; j < m; j++) {
            cin >> num;  // Elemanı oku
            b.push_back(num);  // Elemanı satıra ekle
         }
         x.a.push_back(b);  // Satırı matrise ekle
      }

      // İkinci matrisin elemanlarını oku
      for (i = 0; i < n; i++) {
         vector<int> b;  // Her satır için geçici bir vektör
         int num;
         for (j = 0; j < m; j++) {
            cin >> num;  // Elemanı oku
            b.push_back(num);  // Elemanı satıra ekle
         }
         y.a.push_back(b);  // Satırı matrise ekle
      }

      // İki matrisi toplamak için '+' operatörünü kullan
      result = x + y;

      // Toplam sonucu ekrana yazdır
      for (i = 0; i < n; i++) {
         for (j = 0; j < m; j++) {
            cout << result.a[i][j] << " ";  // Her elemanı yazdır
         }
         cout << endl;  // Her satırdan sonra yeni satıra geç
      }
   }  
   return 0;  // Programın başarılı şekilde sonlandığını belirt
}
