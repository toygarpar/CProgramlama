//İkinci dereceden bir denklemin kareköklerinin hesaplanması


/*

Programı çalıştırmak için :
gcc diskriminant.c -o diskriminant -lm      ile derleyin ve sonra:

./diskriminant    ile çalıştırın!


*/

#include <stdio.h>
#include <math.h> // sqrt fonksiyonu 

int main() {
    float a, b, c;
    float kok1, kok2, imaginary;
    float discriminant;

    printf("(aX^2) + (bX) + c = 0 ikini derece denklemin a, b ve c katsayı degerlerini giriniz: \n");
    scanf("%f %f %f", &a, &b, &c);

    // discriminant hesapla
    discriminant = (b * b) - (4 * a * c);

    // discriminant incele
    if (discriminant > 0) {
        kok1 = (-b + sqrt(discriminant)) / (2 * a);
        kok2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("İki adet ayrık ve gerçel kök bulunmaktadır. Kok 1 = %.2f and Kok 2 = %.2f\n", kok1, kok2);
    } 
    else if (discriminant == 0) {
        kok1 = kok2 = -b / (2 * a);
        printf("Birbilerine eşit iki adet gerçel kök bulunmaktadır. Kok 1 = %.2f ve  Kok 2 = %.2f\n", kok1, kok2);
    } 
    else if (discriminant < 0) {
        kok1 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("İki adet ayrık ve karmaşık kök bulunmaktadır: Kok 1 = %.2f+%.2fi and Kok 2 = %.2f-%.2fi\n", kok1, imaginary, kok1, imaginary);
    }

    return 0;
}