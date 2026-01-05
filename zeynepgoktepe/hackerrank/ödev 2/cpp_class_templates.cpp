#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/* AddElements sınıfını burada tanımlıyoruz */
/* Sınıfı şablon (template) olarak yazıyoruz, böylece farklı veri tipleri ile çalışabiliyoruz */
template <class T>  // T, herhangi bir veri tipi olabilir
class AddElements {
private:
    T element;  // Sınıf içerisinde kullanacağımız eleman

public:
    // Yapıcı fonksiyon (constructor), element adında bir parametre alır ve sınıfın elemanına atar
    AddElements(const T& element) : element(element) {}

    // add fonksiyonu, iki aynı tipteki elemanı toplar
    T add(const T& other) {
        return element + other;  // element ile other'ı topla ve sonucu döndür
    }

    // concatenate fonksiyonu, string gibi birleştirilebilecek veriler için kullanılır
    T concatenate(const T& other) {
        return element + other;  // element ile other'ı birleştir ve sonucu döndür
    }
};

int main () {
    int n, i;  // Kaç işlem yapılacağını belirleyecek n ve döngü sayacı i
    cin >> n;  // Kullanıcıdan n değeri al
    for(i = 0; i < n; i++) {
        string type;  // Kullanıcıdan hangi veri tipi ile işlem yapılacağını belirleyecek değişken
        cin >> type;  // Kullanıcıdan veri tipini al

        // Eğer veri tipi "float" ise
        if(type == "float") {
            double element1, element2;  // İki tane double tipi eleman
            cin >> element1 >> element2;  // Kullanıcıdan iki adet double sayı al
            AddElements<double> myfloat (element1);  // İlk elemanı AddElements sınıfına gönder
            cout << myfloat.add(element2) << endl;  // İkinci eleman ile toplama yap ve sonucu yazdır
        }

        // Eğer veri tipi "int" ise
        else if(type == "int") {
            int element1, element2;  // İki tane int tipi eleman
            cin >> element1 >> element2;  // Kullanıcıdan iki adet tam sayı al
            AddElements<int> myint (element1);  // İlk elemanı AddElements sınıfına gönder
            cout << myint.add(element2) << endl;  // İkinci eleman ile toplama yap ve sonucu yazdır
        }

        // Eğer veri tipi "string" ise
        else if(type == "string") {
            string element1, element2;  // İki tane string tipi eleman
            cin >> element1 >> element2;  // Kullanıcıdan iki string al
            AddElements<string> mystring (element1);  // İlk stringi AddElements sınıfına gönder
            cout << mystring.concatenate(element2) << endl;  // İkinci string ile birleştir ve sonucu yazdır
        }
    }
    
    return 0;  // Programın başarılı şekilde sonlandığını belirt
}
