// void* malloc(size_t size);

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int* ) malloc(5*sizeof(int));

    if(ptr==NULL){
        printf("Hafıza ayrılamadı. \n");
        return 1;
    }

    for(int i=0;i<5;i++){
        ptr[i]=i+1;
        printf("%d ",ptr[i]);
    }
    
    free(ptr);

    return 0;
}

