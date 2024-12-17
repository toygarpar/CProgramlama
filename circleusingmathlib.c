// çemberin alanı ve çevresi hesaplanması


#include <stdio.h>
#include <stdlib.h>
#include <math.h>  //pi sayısını math libden al


int main() {
    
    float radius, diameter, pi, per, area;
    
    pi = M_PI;
    
    // radius/yarıçap bilgisini input al
    
    printf("Çemberin radius/yarıçapı değerini al: ");
    scanf("%f", &radius);
    
    
    
    //diameter hesapla
    
    diameter = 2 * radius;
    
    //çemberin çevresini hesapla:
    
    per = 2 * pi * radius;
    
    
    
    //alanını hesapla
    
    area =  pi *( radius * radius) ;
    
    
    
    //sonuçları yazdır
    
    printf("Çemberin çevresi: %f, alanı :%f", per, area);
    
    
    return 0;
}