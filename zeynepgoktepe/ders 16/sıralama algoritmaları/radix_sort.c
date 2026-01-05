#include<stdio.h>
#include<stdlib.h>
//Dizideki en büyük değeri bulur
int getMax(int arr[],int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//Counting sort algoritmasını uygulayan fonksiyon
void countSort(int arr[],int n,int exp){
    int *output = (int* ) malloc(n*sizeof(int));
    int count[10]={};

    //sayıları uygun count dizisine yerleştir
    for(int i=1; i<10; i++){
        count[(arr[i]/exp)%10]++;
    }

    //counting dizisini güncelle
    for(int i=1;i<10;i++){
        count[i] += count[i-1];
    }

    //sonuç dizisini oluştur
    for(int i=n-1 ; i>=0; i--){
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }

    //sonuçları ana diziye kopyala
    for(int i=0 ; i<n ; i++){
        arr[i]=output[i];
    }

    free(output);//belleği serbest bırak
}

//radix sort algoritması
void radixSort(int arr[], int n){
    int m = getMax(arr,n);
    for(int exp=1; m/exp>0 ; exp*=10)
        countSort(arr,n,exp);
}


int main(){
    int arr[]={170,45,75,90,802,24,2,66};
    int n= sizeof(arr)/sizeof(arr[0]);

    radixSort(arr,n);

    printf("sıralanmış dizi: \n");
    for(int i=0; i<n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}



