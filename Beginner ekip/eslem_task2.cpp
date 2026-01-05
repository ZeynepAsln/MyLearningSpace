#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void matrisyazdirma(int matris[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++){
            cout << matris[i][j] << " ";
        }
        cout<< endl;
    }
}

int main(){
    int a;
    cout << "1. 3×3'lük matriste sıralama." << endl;
    cout << "2. Tek sıra halinde sıralama." << endl ;
    cout << "Yapmak istediğiniz işlemi seçiniz: " ;
    cin >> a;

    switch(a) {
        case 1:
            int matris[3][3];
            int arr1[9];
            cout << "Sıralamak istediğiniz sayıları giriniz:" ;
            for(int i=0; i<9; i++) {
                cin >> arr1[i];
            }
            bubbleSort(arr1,9);
            for(int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    matris[i][j] = arr1[i*3 + j];
                }
            }
            matrisyazdirma(matris);
            break;

        case 2:
            int n;
            cout << "Sıralamak istediğiniz eleman sayısını giriniz: " ;
            cin >> n;
            int *arr = new int[n];
            cout << "Şimdi sıralamak istediğiniz sayıları giriniz:" << endl;
            for(int i=0; i<n; i++) {
                cin >> arr[i];
            }
            bubbleSort(arr,n);
            for(int i=0; i<n; i++) {
                cout << arr[i] <<" ";
            }
            delete[] arr; // Belleği serbest bırak
            break;
    }
    return 0;
}
