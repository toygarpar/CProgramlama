// C Programlama Dili  Varaibles and Arithmetic Expressions 
//Typecasting
/* ++ değişken tipleri arasında dönüşüm işlemleri*/

#include <stdio.h>

int main() {
    
    int num1 = 17, num2 = 5;
    
    int int_div;
    float gercel_div_float;
    double gercel_div_double;
    int gercel_div_float_int;
    
    int_div = num1 / num2;
    printf("Tamsayı bölme sonucu = %d\n", int_div);
    
    
    gercel_div_float = (float) num1 / num2;
    printf("Gerçek Bölme Sonucu (float) = %.20f\n", gercel_div_float);
    
    gercel_div_double = (double) num1 / num2;
    printf("Gerçek Bölme Sonucu (double) = %.20f\n", gercel_div_double);
    
    gercel_div_float_int = (int) num1 / num2;
    printf("Gerçek Bölme Sonucu (float)'un int'e dönüştürülmüş hali = %d\n", gercel_div_float_int);
    
    
    
    return 0;
    
   
    
}