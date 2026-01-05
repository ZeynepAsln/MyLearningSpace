#include<stdio.h>

struct OgrenciStruct{
    int id;
    float ortalama;
    char harfNotu;
    double sonOrtalama;
   
};

union OgrenciUnion{
    int id;
    float ortalama;
    char harfNotu;
    double sonOrtalama;
};


int main(){

    struct OgrenciStruct ogrenciStruct={123,90.2,'A',65.3424,23};
    union OgrenciUnion ogrenciUnion;

    ogrenciUnion.id=123;
    ogrenciUnion.ortalama=90.2;
    ogrenciUnion.harfNotu='A';
    ogrenciUnion.sonOrtalama=65.3424;

printf("Struct Boyutu: %zu bayt\n",sizeof(ogrenciStruct));
printf("Union Boyutu: %zu bayt",sizeof(ogrenciUnion));

    return 0;
}