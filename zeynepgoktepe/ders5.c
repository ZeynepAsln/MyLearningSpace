#include<stdio.h>
#include <string.h>
#include <stdlib.h>

/*
void ters(char* str, int start, int end){
    char temp;
    if(start<=end){
        return;
    }

    temp=str[start];
    str[start]=str[end];
    str[end]=temp;

    ters(str, start+1, end-1);
}

int main(){
    char kelime[100];
    printf("bir kelime giriniz: ");
    scanf("%s",kelime);

    ters(kelime, 0 ,strlen(kelime)-1);

    printf("ters çevrilmiş kelime: %s\n",kelime);

    return 0;
}
*/

/*
int main(){
    int array[]={10,20,30,40,50};
    int *ptr;

    ptr= array;
    ptr++;

    printf("%d",*ptr);
    return 0;
}
*/

/*
int main(){
    int t[10];
    int i;
    int *p;

    for(p=t ; p<t+10 ; p++){
        *p=0;
    }
    
    for(p=t ; p<t+10 ; p++){
        printf("%d\n",*p);
    }

    for(i=0;i<10;i++){
        t[i]=1;
    }

    for(i=0;i<10;i++){
        printf("%d\n",t[i]);
    }
    return 0;
}
*/

