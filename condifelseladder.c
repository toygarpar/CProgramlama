//Nested Koşullu ifadeler ile sayı karşılaştırma işlemlerinin yapılması

#include <stdio.h>

int main() {

    int num1, num2, num3, max;

    //Kullanıcıdan 3 adet sayı alınır
    scanf("%d %d %d", &num1, &num2, &num3);


    if (( num1 > num2) && (num1 > num3)) {
        //num1 hem num2'den hem de num3'ten büyükse
        max = num1;
    }
    else if ((num2 > num1) && (num2 > num3)) {
        //num2 hem num1'den hem de num3'ten büyükse
        max = num2;
    }
    else if ((num3 > num1) && (num3 > num2)) {
        //num3 hem num1'den hem de num2'den büyükse
        max = num3;
    }
    else {
        //num1, num2 ve num3 eşitse
        printf("Girmiş olduğunuz sayılar eşittir\n");
    }




    printf("3 sayı içerisinde en büyük değer: %d\n", max);





    return 0;
}