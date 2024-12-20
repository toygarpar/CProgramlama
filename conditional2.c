//Koşullu İfadeler ile sayı karşılaştırma işlemlerinin yapılması


#include <stdio.h>


int main() {

    int num1, num2;

    //Kullanıcdan iki sayı alınır
    scanf("%d %d", &num1, &num2);


    //Eğer num1, num2'den büyükse

    if (num1 > num2) {
        printf("%d, %d'den büyüktür\n", num1, num2);
    }

    else if (num1 < num2) {
        printf("%d, %d'den küçüktür\n", num1, num2);
    }

    else {
        printf("%d, %d'ye eşittir\n", num1, num2);
    }










    return 0;
}

