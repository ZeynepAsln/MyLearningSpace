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
bool isFull(int* m);

// control fonksiyonu oluştur
int main() {
    start();
    return 0;
}

void start(){
    printFront();
    whilegame();
}
// her kutucuk açıldığında oyun kazanıldı mı kontrol et ve kutucuk daha önce açıldı mı kontrol et
//while döngüsüne al
void whilegame(){
    int n=0;
    int count=0;
    int x;
    cout<<"Player 1: ";
    cin>>x;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            count+=1;
            if(count==x){
                front[i][j]='X';
                n++;
                isFull(n);
            }
        }
    }
    printFront();
    int count2=0;
    int y;
    cout<<"Player 2: ";
    cin>>x;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            count2+=1;
            if(count2==y){
                front[i][j]='O';
                n++;
            }
        }
    }
    printFront();
}

void printFront(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<front[i][j]<<" | ";
        }
        cout<<endl;
        cout<<"----------";
        cout<<endl;
    }

}

bool isFull(int m){
    if(m=9){
        cout<<"Game over! It is a tie!";
        exit(0);
    }
}

int checkwin(){
    if(front[0][0]==front[0][1] && front[0][0]==front[0][2]){
        if(front[0][0]=='X'){

        }
    }
    else if(front[1][0]==front[1][1] && front[1][0]==front[1][2]){

    }
    if(front[2][0]==front[2][1] && front[2][0]==front[2][2]){

    }
    if(front[0][0]==front[1][0] && front[0][0]==front[2][0]){

    }
    if(front[0][1]==front[1][1] && front[0][1]==front[2][1]){

    }
    if(front[0][2]==front[1][2] && front[0][2]==front[2][2]){

    }
    if(front[0][0]==front[1][1] && front[0][0]==front[2][2]){

    }
    if(front[2][0]==front[1][1] && front[2][0]==front[0][2]){

    }


}
