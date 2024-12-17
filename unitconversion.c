// C Programlama Dili  Varaibles and Arithmetic Expressions 

/* ++ metre ve km çevrimlerinin C dilinde yapılması*/

#include <stdio.h>

int main() {
    
    float cm, mt, km;
    
    
    // uzunluğu cm cinsinden input olarak al
    
    printf("Uzunluğu cm cinsinden giriniz: ");
    scanf("%f", &cm);
    
    //çevrim işlemlerini gerçekleştir
    
    mt = cm / 100.0;
    
    km =  cm / 100000.0;
    
    
    printf("Metre cinsinden uzunluk =  %.2f m\n", mt);
    printf("Metre cinsinden uzunluk =  %.4f km\n", km);
    
    
    
    return 0;
    
   
    
}