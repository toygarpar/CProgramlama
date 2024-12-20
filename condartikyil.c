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




    if (yil % 4 == 0) {
        if (yil % 100 != 0) {
            if (yil % 400 == 0) {
                printf("%d bir artik yildir.", yil);
            } 
            else {
                printf("%d bir artik yil degildir.", yil);
            }
        } 
        else {
            printf("%d bir artik yildir.", yil);
        }
    } 
    else {
        printf("%d bir artik yil degildir.", yil);
    }
    
    return 0;
}