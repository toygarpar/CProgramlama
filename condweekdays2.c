// haftanın günlerini isim bazında yazdırma - switch case

#include <stdio.h>

int main () {
    int day;


    //Kullanıcıdan 1-7 arasında bir sayı alınır ve girilen sayıya göre haftanın günü yazdırılır.
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);

    //day üzerinden anahtarlaama yapıyoruz ve dallara göre işlem yapılıyor.

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}