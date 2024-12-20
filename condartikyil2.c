//Yılın artık yıl olup olmadığının kontrolü

#include <stdio.h>


int main () {
    int yil;

    //Kullanıcıdan yıl bilgisini alıyoruz
    printf("Yil giriniz: ");
    scanf("%d", &yil);

    /*
    Değer 4'e bölünebiliyorsa ve 100'e tam bölünemiyorsa veya 400'e tam bölünüyorsa artık yıldır.
    Aksi halde artık yıl değildir.
    
    
    */

   if ((yil % 4 == 0 && yil % 100 != 0) || yil % 400 == 0) {
       printf("%d artik yildir.\n", yil);
   } else {
       printf("%d artik yil degildir.\n", yil);
   }

    return 0;

}