#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

char front[3][3] = {{'1', '2', '3'},
                  {'4', '5', '6'},
                  {'7', '8', '9'}};

void printFront();
void start();
int checkwin();
void whilegame();
void control();
bool isFull(int m);


int main() {
    start();
    return 0;
}

void start(){
    printFront();
    whilegame();
}

void whilegame(){
     
    int x, y;
    
    while (true) {  
        int n = 0,m=0; 
        cout << "Player 1: ";
        cin >> x;

        bool moveMade = false;  
        for (int i = 0; i < 3 && !moveMade; i++) {
            for (int j = 0; j < 3 && !moveMade; j++) {
                n++;
                if(n==x){
                    front[i][j] = 'X';
                    moveMade = true; 
                }
            }
        }
        printFront();
        if (isFull(n) || checkwin()) return;  

       
        cout << "Player 2: ";
        cin >> y;

        moveMade = false;  
        for (int i = 0; i < 3 && !moveMade; i++) {
            for (int j = 0; j < 3 && !moveMade; j++) {
                m++;
                if (m==y) {  
                    front[i][j] = 'O';
                    moveMade = true;  
                }
            }
        }
        printFront();
        if (isFull(n) || checkwin()) return;  
    }
}

void printFront(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << front[i][j] << " | ";
        }
        cout << endl;
        if (i < 2) cout << "----------" << endl;  
    }
}

bool isFull(int m){
    if(m==9){
        cout<<"Game over! It is a tie!";
        return true;
    }
    return false;
}

int checkwin(){
    
    for (int i = 0; i < 3; i++) {
        if (front[i][0] == front[i][1] && front[i][0] == front[i][2]) {
            if (front[i][0] == 'X') {
                cout << "Player 1 won!" << endl;
                return 1;
            } else if (front[i][0] == 'O') {
                cout << "Player 2 won!" << endl;
                return 1;
            }
        }
        if (front[0][i] == front[1][i] && front[0][i] == front[2][i]) {
            if (front[0][i] == 'X') {
                cout << "Player 1 won!" << endl;
                return 1;
            } else if (front[0][i] == 'O') {
                cout << "Player 2 won!" << endl;
                return 1;
            }
        }
    }
    
    if ((front[0][0] == front[1][1] && front[0][0] == front[2][2]) ||
        (front[2][0] == front[1][1] && front[2][0] == front[0][2])) {
        if (front[1][1] == 'X') {
            cout << "Player 1 won!" << endl;
            return 1;
        } else if (front[1][1] == 'O') {
            cout << "Player 2 won!" << endl;
            return 1;
        }
    }
    return 0;
}