#include<stdio.h>

int binarySearch(int arr[],int size, int target){
    int low=0;
    int high=size-1;

    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>target){
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,10,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target=10;
    int result = binarySearch(arr , size ,target);

    if(result != -1){
        printf("eleman dizinin %d.indeksinde bulundu\n",result);
    }
    else 
        printf("eleman dizide bulunamadı. \n");

    return 0;
}