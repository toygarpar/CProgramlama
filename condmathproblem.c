//If-else ile matematiksel problemler

#include <stdio.h>

int main() {

    int maliyet, satis, kar;

    //Ürünün maliyet ve satış bedellerini kullanıcıdan alalım

    printf("Ürünün maliyetini giriniz: ");
    scanf("%d", &maliyet);

    printf("Ürünün satış fiyatını giriniz: ");
    scanf("%d", &satis);


    if (satis > maliyet) {
        kar = satis - maliyet;
        printf("Kar: %d\n", kar);
    } 
    else if (satis < maliyet) {
        printf("Zarar: %d\n", maliyet - satis);
    } 
    else {
        printf("Kar ve zarar yok\n");
    }
    






    return 0;
}