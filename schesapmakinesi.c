// switch case ile basit bir hesap makinesi uygulaması

#include <stdio.h>



int main() {

    char fonksiyon;
    float num1, num2, sonuc = 0.0f;

    //Karşılama mesajı
    printf("Hesap Makinesine Hoşgeldiniz\n");
    printf("\n............................................\n");
    printf("Lütfen [sayı 1] [fonsiyon: + - * /] [sayı 2] şeklinde işlem yapmak istediğiniz sayıları ve fonksiyonu giriniz\n");

    //Kullanıcıdan işlem yapmak istediği sayıları ve fonksiyonu alıyoruz
    scanf("%f %c %f", &num1, &fonksiyon, &num2);


    //Switch case yapısı ile kullanıcının girdiği fonksiyona göre işlem yapılıyor
    switch (fonksiyon) {
        case '+':
            sonuc = num1 + num2;
            break;
        case '-':
            sonuc = num1 - num2;
            break;
        case '*':
            sonuc = num1 * num2;
            break;
        case '/':
            sonuc = num1 / num2;
            break;
        default:
            printf("Hatalı fonksiyon girdiniz\n");
            break;
    }

    //Sonucu ekrana yazdırıyoruz
    printf("Sonuc: %.2f\n", sonuc);








    return 0;
}