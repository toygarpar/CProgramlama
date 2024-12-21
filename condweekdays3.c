// haftanın günlerini isim bazında yazdırma: hafta içi ve hafta sonu : switch case kullanarak

#include <stdio.h>

int main() {

    int day;


    //Kullanıcıdan haftanın kaçıncı günü olduğunu alıyoruz

    printf("Haftanin kacinci gunu oldugunu giriniz: ");
    scanf("%d", &day);

    switch (day) {

        case 1:
            printf("Hafta ici: Pazartesi\n");
            break;
        case 2:
            printf("Hafta ici: Sali\n");
            break;  
        case 3:
            printf("Hafta ici: Carsamba\n");
            break;  
        case 4:
            printf("Hafta ici: Persembe\n");
            break;
        case 5:p
            printf("Hafta ici: Cuma\n");
            break;
        case 6:
            printf("Hafta sonu: Cumartesi\n");
            break;
        case 7:
            printf("Hafta sonu: Pazar\n");
            break;
        default:
            printf("Gecersiz gun girisi\n");
            break;
















    }    













    return 0;
}