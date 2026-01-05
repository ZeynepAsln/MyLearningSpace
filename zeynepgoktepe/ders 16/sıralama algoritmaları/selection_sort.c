#include<stdio.h>

selectionSort(int arr[],int n){
    int i,j,min;
    for(i=0;n-1;i++){
        min=i;
        for(j=i+1;j<n; j++){
            if(arr[j]<arr[min])
                min=j;
        }
        int temp= arr[min];
        arr[min]= arr[i];
        arr[i]=temp;
    }
}

int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    printf("sıralanmış dizi: \n");
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
