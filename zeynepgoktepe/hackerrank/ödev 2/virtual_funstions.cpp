#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Ana sınıf Person, hem Professor hem de Student sınıfları tarafından miras alınacak
class Person {
public:
    string name;  // Kişinin ismi
    int age;      // Kişinin yaşı
    
    // Sanal (virtual) getdata fonksiyonu, daha sonra türetilen sınıflarda yeniden tanımlanacak
    virtual void getdata() {
        cin >> this->name >> this->age;  // Kişinin adı ve yaşını kullanıcıdan al
    }
    
    // Sanal (virtual) putdata fonksiyonu, türetilen sınıflarda yeniden tanımlanacak
    virtual void putdata() {
        cout << this->name << " " << this->age << endl;  // Kişinin adını ve yaşını yazdır
    }
};

// Professor sınıfı, Person sınıfından miras alır
class Professor : public Person {
public:
    Professor() {
        this->cur_id = ++id;  // Her profesör için benzersiz bir ID atanır
    }
    
    int publications;  // Profesörün yayın sayısı
    static int id;     // Tüm profesörler için benzersiz ID'leri izlemek için statik id
    int cur_id;        // Her profesörün bireysel ID'si

    // getdata fonksiyonu, profesörün adı, yaşı ve yayın sayısını kullanıcıdan alır
    void getdata() {
        cin >> this->name >> this->age >> this->publications;
    }
    
    // putdata fonksiyonu, profesörün bilgilerini ekrana yazar
    void putdata() {
        cout << this->name << " "
            << this->age << " "
            << this->publications << " "
            << this->cur_id << endl;
    }
};
// Statik id değişkeni başlangıçta 0 olarak başlatılır
int Professor::id = 0;

// Student sınıfı, Person sınıfından miras alır
class Student : public Person {
#define NUM_OF_MARKS 6  // Öğrencinin alacağı notların sayısını belirler
public:
    Student() {
        this->cur_id = ++id;  // Her öğrenci için benzersiz bir ID atanır
    }
    
    int marks[NUM_OF_MARKS];  // Öğrencinin aldığı 6 notu saklar
    static int id;            // Tüm öğrenciler için benzersiz ID'leri izlemek için statik id
    int cur_id;               // Her öğrencinin bireysel ID'si

    // getdata fonksiyonu, öğrencinin adı, yaşı ve notlarını kullanıcıdan alır
    void getdata() {
        cin >> this->name >> this->age;
        for (int i=0; i<NUM_OF_MARKS; i++) {
            cin >> marks[i];  // Öğrencinin 6 notunu kullanıcıdan al
        }
    }

    // putdata fonksiyonu, öğrencinin bilgilerini ekrana yazar
    void putdata() {
        int marksSum = 0;  // Notların toplamını tutar
        for (int i=0; i<NUM_OF_MARKS; i++) {
            marksSum += marks[i];  // Notların toplamını hesaplar
        }
        cout << this->name << " "
            << this->age << " "
            << marksSum << " "
            << this->cur_id << endl;  // Öğrencinin adını, yaşını, notlar toplamını ve ID'sini yazdırır
    }
};
// Statik id değişkeni başlangıçta 0 olarak başlatılır
int Student::id = 0;

int main(){
    int n, val;
    cin >> n;  // Kaç kişi olduğunu belirler

    // Person sınıfı işaretçilerini (pointer) tutan bir dizi oluşturulur
    Person *per[n];

    // Her kişi için
    for(int i = 0; i < n; i++) {
        cin >> val;  // Kullanıcıdan 1 ya da 2 alır (1: Professor, 2: Student)
        
        if(val == 1) {
            per[i] = new Professor;  // Eğer 1 girilmişse, bir Professor oluşturulur
        }
        else {
            per[i] = new Student;    // Eğer 2 girilmişse, bir Student oluşturulur
        }

        // Kişinin verilerini alır (ad, yaş ve ek bilgiler)
        per[i]->getdata(); 
    }

    // Her kişi için bilgileri ekrana yazdır
    for(int i = 0; i < n; i++) {
        per[i]->putdata();  // Kişinin bilgilerini ekrana yazar
    }

    return 0;  // Program başarıyla sonlandırılır
}
