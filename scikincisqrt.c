//Switch case ile ikinci dereceden bir denklemin köklerini bulma


/*

Programı çalıştırmak için :
gcc scikincisqrt.c -o scikincisqrt -lm      ile derleyin ve sonra:

./scikincisqrt -lm    ile çalıştırın!


*/

#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float kok1, kok2, imaginary;
    float discriminant;

    printf("(a)x^2 + (b)x + (c) seklindeki ikinci dereceden denklemin katsayilarini giriniz: \n");
    scanf("%f %f %f", &a, &b, &c);

    //denklemin diskriminantini hesapla

    discriminant = (b * b) - (4 * a * c);

    // dicriminant'ı incele

    switch (discriminant > 0) {
        case 1:
            //discriminant pozitif ise
            kok1 = (-b + sqrt(discriminant)) / (2 * a);
            kok2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Denklemin ayrık ve gerçel olarak iki adet reel koku vardir: %.2f ve %.2f\n", kok1, kok2);
            break;
        case 0:
            //discriminant sıfır veya negatif ise
            switch (discriminant < 0) {
                case 1:
                //discriminant negatif ise
                    kok1 = kok2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);
                    printf("Denklemin iki karmasik koku vardir: %.2f + %.2fi ve %.2f - %.2fi\n", kok1, imaginary, kok2, imaginary);
                    break;
                case 0:
                //discriminant sıfır ise
                    kok1 = kok2 = -b / (2 * a);
                    printf("Denklemin iki esit reel koku vardir: %.2f ve %.2f\n", kok1, kok2);
                    break;
            }
            break;
    }








    return 0;
}
