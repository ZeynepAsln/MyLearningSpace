#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

// Oyun tahtasını temsil eden 3x3'lik matris
char front[3][3] = {{'1', '2', '3'},
                  {'4', '5', '6'},
                  {'7', '8', '9'}};

// Fonksiyonların bildirimleri
void printFront();  // Oyun tahtasını ekrana yazdırır
void start();  // Oyunu başlatır
int checkwin();  // Kazananı kontrol eder
void whilegame();  // Oyunun ana döngüsünü çalıştırır
void control();  // Kazanma veya beraberlik durumunu kontrol eder
bool isFull();  // Tahtanın dolu olup olmadığını kontrol eder

int main() {
    // Oyunu başlat
    start();
    return 0;
}

// Oyun tahtasını ekrana yazdıran fonksiyon
void printFront() {
    for (int i = 0; i < 3; i++) {
        cout << front[i][0] << " | " << front[i][1] << " | " << front[i][2] << endl;
        cout << "----------" << endl;  // Satırları ayırmak için çizgi
    }
}

// Oyunu başlatan fonksiyon, başlangıç mesajı verir ve oyunu başlatır
void start(){
    cout << "WELCOME TO TIC TAC TOE" << endl;
    printFront();  // Oyun tahtasını ekrana yazdırır
    cout << "Good luck!" << endl;
    whilegame();  // Oyun döngüsünü başlatır
}

// Oyunculardan biri kazandıysa 1 veya 2 döndürür, aksi takdirde 0 döndürür
int checkwin(){
    // Eğer herhangi bir yatay, dikey veya çapraz satırda aynı semboller varsa kazanan belirlenir
    if(front[0][0] == 'X' && front[0][1] == 'X' && front[0][2] == 'X'){
        return 1;
    }
    else if(front[1][0] == 'X' && front[1][1] == 'X' && front[1][2] == 'X'){
        return 1;
    }
    else if(front[2][0] == 'X' && front[2][1] == 'X' && front[2][2] == 'X'){
        return 1;
    }
    else if(front[0][0] == 'X' && front[1][0] == 'X' && front[2][0] == 'X'){
        return 1;
    }
    else if(front[0][1] == 'X' && front[1][1] == 'X' && front[2][1] == 'X'){
        return 1;
    }
    else if(front[0][2] == 'X' && front[1][2] == 'X' && front[2][2] == 'X'){
        return 1;
    }
    else if(front[0][0] == 'X' && front[1][1] == 'X' && front[2][2] == 'X'){
        return 1;
    }
    else if(front[0][2] == 'X' && front[1][1] == 'X' && front[2][0] == 'X'){
        return 1;
    }
    else if(front[0][0] == 'O' && front[0][1] == 'O' && front[0][2] == 'O'){
        return 2;
    }
    else if(front[1][0] == 'O' && front[1][1] == 'O' && front[1][2] == 'O'){
        return 2;
    }
    else if(front[2][0] == 'O' && front[2][1] == 'O' && front[2][2] == 'O'){
        return 2;
    }
    else if(front[0][0] == 'O' && front[1][0] == 'O' && front[2][0] == 'O'){
        return 2;
    }
    else if(front[0][1] == 'O' && front[1][1] == 'O' && front[2][1] == 'O'){
        return 2;
    }
    else if(front[0][2] == 'O' && front[1][2] == 'O' && front[2][2] == '0'){
        return 2;
    }
    else if(front[0][0] == 'O' && front[1][1] == 'O' && front[2][2] == 'O'){
        return 2;
    }
    else if(front[0][2] == 'O' && front[1][1] == 'O' && front[2][0] == 'O'){
        return 2;
    }
    return 0;  // Kazanan yok
}

// Tüm karelerin dolu olup olmadığını kontrol eden fonksiyon
bool isFull() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(isdigit(front[i][j])) {  // Eğer kare hala bir rakam içeriyorsa boş demektir
                return false;
            }
        }
    }
    return true;  // Tüm kareler dolu
}

// Oyunun ana döngüsünü çalıştırır
void whilegame() {
    int player1, player2;
    while(1) {
        // Oyuncu hareketlerini kontrol eder ve kazanan olup olmadığını kontrol eder
        control();
        if (checkwin() || isFull()) break;  // Kazanan veya dolu tahta varsa döngüden çık

        // 1. oyuncudan hareket al
        cin >> player1;
        // Eğer oyuncunun seçtiği kare zaten doluysa, tekrar seçim yapmasını ister
        while (front[(player1-1)/3][(player1-1)%3] == 'X' || front[(player1-1)/3][(player1-1)%3] == 'O') {
            cout << "Box already taken. Choose again: ";
            cin >> player1;
        }
        // 1. oyuncunun hamlesini tahtaya yerleştirir
        front[(player1-1)/3][(player1-1)%3] = 'X';
        printFront();  // Güncellenmiş tahtayı yazdırır

        // Tekrar kazanma veya dolu tahta kontrolü
        control();
        if (checkwin() || isFull()) break;

        // 2. oyuncudan hareket al
        cin >> player2;
        // Eğer oyuncunun seçtiği kare zaten doluysa, tekrar seçim yapmasını ister
        while (front[(player2-1)/3][(player2-1)%3] == 'X' || front[(player2-1)/3][(player2-1)%3] == 'O') {
            cout << "Box already taken. Choose again: ";
            cin >> player2;
        }
        // 2. oyuncunun hamlesini tahtaya yerleştirir
        front[(player2-1)/3][(player2-1)%3] = 'O';
        printFront();  // Güncellenmiş tahtayı yazdırır
    }
}

// Oyunun bitip bitmediğini kontrol eden fonksiyon (kazanan veya beraberlik)
void control() {
    int win = checkwin();
    if(win == 1) {
        cout << "Player 1 wins!" << endl;
        exit(0);  // 1. oyuncu kazandıysa oyunu sonlandırır
    } else if(win == 2) {
        cout << "Player 2 wins!" << endl;
        exit(0);  // 2. oyuncu kazandıysa oyunu sonlandırır
    } else if(isFull()) {
        cout << "It's a tie!" << endl;
        exit(0);  // Oyun berabere biterse oyunu sonlandırır
    }
}
