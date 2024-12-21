// Haftanın günlerini isim bazında yazdırma


#include <stdio.h>

int main() {


    int day;

    //Kullanıcıdan, haftanın kaçıncı günü olduğunun bilgisini al

    printf("Günün, haftanın kaçıncı günü olduğunu giriniz(1-7): ");
    scanf("%d", &day);


    if (day == 1) {
        printf("Pazartesi");
    } else if (day == 2) {
        printf("Salı");
    } else if (day == 3) {
        printf("Çarşamba");
    } else if (day == 4) {
        printf("Perşembe");
    } else if (day == 5) {
        printf("Cuma");
    } else if (day == 6) {
        printf("Cumartesi");
    } else if (day == 7) {
        printf("Pazar");
    } else {
        printf("Hatalı giriş yaptınız. Lütfen 1-7 arasında bir sayı giriniz.");
    }
       







    return 0;
}