//Pointer ile toplama işlemi

#include <stdio.h>

int main() {

    int num1, num2, total; //iki tane integer sayı ve toplamı tutacak bir integer tanımladık.

    int *ptr1, *ptr2; //2 tane integer sayıya point eden iki pointer tanımladık.

    ptr1 = &num1; //pointer1 num1'in adresini tutacak.
    ptr2 = &num2; //pointer2 num2'nin adresini tutacak.

    scanf("%d %d", ptr1, ptr2); //scanf kullanımında buraya dikkat!
    //buraya &ptr1, &ptr2 yazmamıza gerek yok. Çünkü zaten ptr1 ve ptr2 num1 ve num2'nin adreslerini tutuyor. scanf("%d %d", &num1, &num2); yazmış gibi oluyoruz.

    total =*ptr1 +*ptr2; //pointer1 ve pointer2'nin gösterdiği adreslerdeki değerleri topladık.

    printf("Total: %d", total); //toplamı yazdırdık.
   
    return 0;
}