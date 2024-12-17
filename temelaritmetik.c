// C Programlama Dili  Varaibles and Arithmetic Expressions 

/* Temel Artimetik işlemlerinin gerçekleştirilmesi*/

#include <stdio.h>

int main() {
    
    int num1, num2;
    int total, sub, mul, mod;
    float divi;
    
    
    /*Kullanıcıdan iki sayı al*/
    
    printf("Lütfen iki tam sayı giriniz: ");
    
    scanf("%d\t%d", &num1, &num2 );  
    /*num1 ve num2 değişkenlerinin bulunduğu adrese yaz*/
    
    //Aritmetik işlemleri gerçekleştir
    
    total = num1 + num2;
    
    sub = num1 - num2;
    
    mul =  num1 * num2;
    
    divi = (float)num1 / num2;
    
    mod = num1 % num2 ;
    
    
    //sonuçları yazdır
    
    printf("Toplam = %d\n", total);
    printf("Fark = %d\n", sub);
    printf("Çarpım = %d\n", mul);
    printf("Bölüm = %.2f\n", divi);
    printf("Kalan veya Modülo = %d\n", mod);
    
    
    
    return 0;
    
   
    
}