// Kuvvet Hesaplarının Yapılması


#include <stdio.h>
#include <stdlib.h>
#include <math.h> //pow() fonksiyonunu kullanabilmek için

int main() {
    double taban, us, res;
    
    //Kullanıcıdan iki sayı al
    
    printf("Taban değeri giriniz: ");
    scanf("%lf", &taban);   //l stands for "long" and indicates that the data type is a double
    
    printf("Us Kuvvet Giriniz: ");
    scanf("%lf", &us);     //%lf is used for historical or explicit clarity.  %f just works fine
    
    
    //taban^us değerini hesapla
    
    res = pow(taban, us);
    
    printf("%.2lf ^ %.2lf = %.2lf", taban, us, res);
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}