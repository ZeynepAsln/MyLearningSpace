#include<stdio.h>

yerdegistir(int *a , int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

quick(int arr[],int low,int high){
    int pivot=arr[high];
    int i=(low-1);

    for(int j=low ;j<=high-1 ;j++) {
        if(arr[j]< pivot){
            i++;
            yerdegistir(&arr[i],&arr[j]);
        }
    }
    yerdegistir(&arr[i+1],&arr[high]);
    return (i+1);
}

quickSort(int arr[],int low, int high){
    int pi;

    if(low<high){
        pi = quick(arr,low,high);
    }

    quickSort(arr,low, pi - 1);
    quickSort(arr,pi+1,high);
}

int main(){
    int arr[]={10,8,7,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0 ,n-1);

    printf("sıralanmış dizi : \n ");
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}