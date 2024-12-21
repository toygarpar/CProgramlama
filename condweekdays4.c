//Haftanın günlerini isim bazında yazıdrma: switch-case yapısını kullanarak: case gruplama yapısı


#include <stdio.h>


int main() {

    int day;


    //Kullanıcıdan haftanın kaçıncı günü olduğunu alıyoruz

    printf("Haftanin kacinci gunu oldugunu giriniz: ");
    scanf("%d", &day);


    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Haftaici\n");
            break;
        case 6:
        case 7:
            printf("Haftasonu\n");
            break;
        default:
            printf("Gecersiz gun\n");
            break;
    }