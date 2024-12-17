// Karekök Hesaplarının Yapılması


#include <stdio.h>
#include <stdlib.h>
#include <math.h> //sqrt() fonksiyonunu kullanabilmek için

int main() {
    double num, karekok;
    
    //Kullanıcıdan iki sayı al
    
    printf("Karekök hesaplanacak sayıyı giriniz: ");
    scanf("%lf", &num);   //l stands for "long" and indicates that the data type is a double
    
    
    
    
    //karekök değerini hesapla
    
    karekok = sqrt(num);
    
    printf("%.2lf sayısının karekökü = %.2lf", num, karekok);
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}