// Bileşik faiz hesabı Yapılması


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    
    float capital, period , interest_rate, simple_rate_accu , comp_accumulated;
    
    
    //take inputs
    
    printf("Anapara miktarını giriniz: ");
    scanf("%f", &capital);
    
    printf("Zamanı giriniz: ");
    scanf("%f", &period);
    
    printf("Faiz oranını giriniz: ");
    scanf("%f", &interest_rate);
    
    
    
    //faiz miktarını hesapla
    
    simple_rate_accu = (capital * period * interest_rate) / 100;
    
    
    //basit faiz hesabı sonucunu yazdır
    
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %f\n", simple_rate_accu);
    
    //bileşik faiz hesabı ile faiz miktarını hesapla
    
    comp_accumulated = capital * (pow((1 + interest_rate /100), period)); 
    
    //bileşik faiz hesabının sonucunu yazdır
    
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %.2f", comp_accumulated);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}