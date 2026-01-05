#include <stdio.h>

int main() {

    int ana_para = 1600;

    while(1){
        int x;
        printf("bir sayi gir: (1-para cekme / 2- para yatirma / 3- havale yapma / 4- bakiye sorgulama / 5- kart iade) ");
        scanf("%d", &x);
    switch (x){
        case 1:
            int gider;
            printf("ne kadar cekmek istersiniz? ");
            scanf("%d", &gider);
            if (gider> ana_para){
                printf("Bakiyeniz yetersiz");
            }
            else{
                ana_para-= gider;
                printf("Kalan bakiye %d tl'dir", ana_para);
            }
            break;
        case 2:
            int gelir;
            printf("Yatirmak istediginiz degeri giriniz: ");
            scanf("%d", &gelir);
            ana_para+=gelir;
            printf("Yeni bakiyeniz %d tl'dir", ana_para);
            break;
        case 3:
            int havale;
            printf("ne kadar havale istersiniz? ");
            scanf("%d", &havale);
            if (havale> ana_para){
                printf("Bakiyeniz yetersiz");
            }
            else{
                ana_para-= havale;
                printf("Kalan bakiye %d tl'dir", ana_para);
            }
            break;
        case 4:
            printf("Bakiyeniz %d tl'dir", ana_para);
            break;
        case 5:
            printf("kartiniz iade edilmistir");
            break;
        default:
            printf("gecerli bir islem giriniz");
            break;
    }
    printf("\n\n");
}

    return 0;
}
