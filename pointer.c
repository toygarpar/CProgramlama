// Pointer Kavramı ve Uygulaması

#include <stdio.h>

int main() {
    int num = 10;
    int * p;
    
    // num değişkeninin adresi, p isimli pointer tipi değişken tarafından tutulacak
    // The address of the num variable will be held by the pointer variable named p
    p = &num;






    printf("num'nın değeri/içeriği: %d\n", num);
    printf("num'nın adresi: %p\n", &num);

    printf("\n............................................\n");


    printf("pointer değişkeni p'nin /içeriği: %p\n", p);
    printf("pointer değişkeni p'nin adresi: %p\n", &p);  //pointer için açılan bellek adresini de görmek istiyoruz
    printf("pointer değişkeni p'nin gösterdiği/işaret ettiği  değer: %d\n", *p);

    return 0;
}