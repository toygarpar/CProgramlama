// dikdörtgen alanı ve çevresi hesaplanması


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    
    float h, w , per, area;
    
    // uzunluk ve genişlik değerlerini input al
    
    printf("Dikdörtgenin uzunluğunu al: ");
    scanf("%f", &h);
    
    printf("Dikdörtgenin genişliğini al: ");
    scanf("%f", &w);
    
    
    
    //dikdörtgenin çevresini hesapla:
    
    per = 2 * ( h + w );
    
    
    
    //alanı hesapla
    
    area =  h * w ;
    
    
    
    //sonuçları yazdır
    
    printf("Dikdörtgenin çevresi: %f, alanı :%f", per, area);
    
    
    return 0;
}