//C Dili Kullanıcı Tanımlı Değişken Türleri - Enum

/*Enum -  Belirli bir sıralı listeden seçenek yapmamıza izin veri yapı türü

Eğitim Düzeyi - İlkokul, Ortaokul, Lise, Ön Lisans, Lisans,Yüksek Lisans, Doktora

Makul değerlerle doldurulması, izin verilmeyen seçenekleri dışarda bırakmak için*/

//programlama yaparken bazen sadece tanımlı değişkenler kullanamanız gerekir

#include <stdio.h>

enum Levels {
    LO = 14,
    MID = 19,
    HI = 24
};


int main() {
    //enum türünde bir değişken tanımlama ve değer atama

    enum Levels RoomTemp = HI;

    //enum değişkenini yazdır

    printf("%d\n", RoomTemp);
    printf("\n...........................\n");

    





    return 0;
}


