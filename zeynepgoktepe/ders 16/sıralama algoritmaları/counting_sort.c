#include<stdio.h>
#include<string.h>

countingSort(int arr[],int n,int max){
    int count[max+1],output[n];
    memset(count,0,sizeof(count));

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0; i<=max; i++){
        count[i]+= count[i-1];
    }
    for(int i=n-1 ; i>=0 ; i--){
        output[count[arr[i]-1]] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0; i<n ;i++){
        arr[i]=output[i];
    }
}

int main(){
    int arr[]={4,2,2,8,3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=8;

    countingSort(arr,n,max);

    printf("sıralanmış dizi: \n");
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    
    return 0;
}