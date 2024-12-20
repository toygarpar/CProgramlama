//Nested Koşullu ifadeler ile sayı karşılaştırma işlemlerinin yapılması

#include <stdio.h>

int main() {

    int num1, num2, num3, max;

    //Kullanıcıdan 3 adet sayı alınır
    scanf("%d %d %d", &num1, &num2, &num3);


    if ( num1 > num2) {

        if (num1 > num3) {

            //num1 > num2 ve num1 > num3 ise

            max = num1;
        }
        else {
            
            //num1 > num2 ve num1 < num3 ise

            max = num3;
        }



    }
    else {  //13. satırın else koşul bloğu

        if (num2 > num3) {

            //num1 < num2 ve num2 > num3 ise

            max = num2;
        }
        else {

            //num1 < num2 ve num2 < num3 ise

            max = num3;
        }
    }






    printf("En büyük sayı: %d\n", max);





    return 0;
}


