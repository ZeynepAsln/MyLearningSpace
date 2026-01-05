#include<iostream>
using namespace std;

//dizi veya matris oluşturulduktan sonra bu fonksiyona gönderilip sıralanıyor.
void insertionSort(float arr1[],int N){
    float Tmp;
    int j;
    
    for(int i=1;i<N;i++){  
        Tmp=arr1[i];
        for(j=i;j>0 && arr1[j-1]>Tmp;j--){
            arr1[j]=arr1[j-1];
        }
        arr1[j]=Tmp;
    }
}

//matris değerlerinin girdilerini almak için bu fonksiyon kullanılıyor.
void matrisOluştur(float arr[2][3]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>> arr[i][j];
        }
    }
}

//matrisi yazdırmak için bu fonksiyon kullanılıyor.
void matrisYazdır(float arr[2][3]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<< endl;
    }
}

int main(){
    float arr1[6];
    float arr2[2][3];
    int y;

    //girdiğimiz değerleri matris veya dizi şeklinde programın başında ayırdım.
    cout<< "Yapmak istediğiniz işlemi seçiniz: " << endl << "1)Matris oluştur" << endl << "2)Dizi oluştur" << endl;
    cin >> y;

    //eğer matris oluşturulacaksa bu koşula giriyor ve sıralanıp tekrar yazdırıyor.
    if(y==1){
        cout<< "matris elemanlarını giriniz: ";
        matrisOluştur(arr2);
        matrisYazdır(arr2);
        
        cout<<endl;
        
        insertionSort(&arr2[0][0], 6);
        matrisYazdır(arr2);
    }

    //eğer dizi oluşturulacaksa bu koşula giriyor ve sıralanıp tekrar yazdırılıyor. 
    else if(y==2){
        cout<< "6 öğe içeren bir dizi giriniz: " << endl;
        for(int i=0;i<6;i++){
            cin>>arr1[i];
        }
        for(int c=0;c<6;c++){
            cout<<arr1[c] ;
        }
        
        cout<<endl;    
        
        insertionSort(arr1,6);
    
        for(int b=0;b<6;b++){
            cout<<arr1[b] ;
        }
    }

    //iki değer dışında bir değer girilirse programdan çıkıyor.
    else{
        cout<<"Geçersiz işlem girdiniz."<< endl;
    }
    
    return 0;
}