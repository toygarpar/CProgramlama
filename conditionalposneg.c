//koşullu ifadeler ile bir sayının pozitif veya negatif olduğunu belirleyelim
//if-else if-else yapısı kullanılacak

#include <stdio.h>


int main() {

    int num;

    //Kullanıcıdan sayıyı al
    printf("Bir sayı giriniz: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Girmiş olduğunuz sayı pozitifdir.");
    }
    else if (num < 0) {
        printf("Girmiş olduğunuz sayı negatifdir.");
    }
    else {
        printf("Girmiş olduğunuz sayı sıfırfır");
    }










    return 0;
}