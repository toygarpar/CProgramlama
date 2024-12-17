// Basit faiz hesabı Yapılması


#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float capital, period , interest_rate , accumulated;
    
    
    //take inputs
    
    printf("Anapara miktarını giriniz: ");
    scanf("%f", &capital);
    
    printf("Zamanı giriniz: ");
    scanf("%f", &period);
    
    printf("Faiz oranını giriniz: ");
    scanf("%f", &interest_rate);
    
    
    
    //faiz miktarını hesapla
    
    accumulated = (capital * period * interest_rate) / 100;
    
    
    //sonucu yazdır
    
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %f", accumulated);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}