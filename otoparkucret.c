#include <stdio.h>

main(){
    
    int saat;
    int ücret;

    printf("Otoparkda kac saat kaldınız?:\n");
    scanf("%d",&saat);

    if(saat>0 && saat<=4){
        printf("Ucretiniz 15 Turk Lirasi\n");
    }
    else if(saat>4 && saat<=8){
        printf("Ucretiniz 20 Turk Lirasi\n");
    }
    else if(saat>9 && saat<=12){
        printf("Ucretiniz 25 Turk Lirasi\n");
    }
    else if(saat>12){
        printf("Ucret hesaplanması için lutfen güvenlige basvurunuz\n");
    }


    





    return 0;
}