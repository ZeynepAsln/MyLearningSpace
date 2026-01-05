#include<stdio.h>

int lineerSearch(int arr[],int size,int target){
    for(int i=0 ; i<size; i++){
        if(arr[i]==target)
            return i;
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,10,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=10;
    int result= lineerSearch(arr,size,target);

    if(result !=-1){
        printf("eleman dizinin %d.indeksinde bulundu\n ", result);
    }
    else
        printf("eleman dizide bulunamadı\n");

    return 0;
}