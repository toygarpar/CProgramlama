// C Programlama dilinde struct'lar

#include <stdio.h>
#include <string.h>

 //PersonelBilgisi isimli bir Struct oluşturmak
 //OOP dillirende class kavramının atası sayılır, struct
 //sturctlar class'a dönüşmüştür, fonklar eklenmiştir.

 struct EmployeeInfo {
    int Age;
    float Wage;
    char Name[30];
    char Gender[8];

 };

int main() {

    //EnmployeeInfo/PersonelBilgisi struct/yapısında Employee1 adlı bir değişken tanımla

    struct EmployeeInfo Employee1;

    //Employee1 alanlarına değer ata
    //Employee1.Name = "Toygar Par"; yazarsak hata mesajı alırız.
    //char türleri için strcpy kullanıyoruz

    /*Doğrudan char dizisi olanlara doğrudan bir atama yapamıyoruz, strcpy fonk kullanıyoruz*/

    strcpy(Employee1.Name , "Toygar Par");
    strcpy(Employee1.Gender , "Male");

    Employee1.Age = 50;
    Employee1.Wage = 50000;


    //Struct değerlerini yazdır

    printf("Personelin Adı: %s\n", Employee1.Name);
    printf("Personelin Cinsiyeti: %s\n", Employee1.Gender);
    printf("Personelin Yaşı: %d\n", Employee1.Age);
    printf("Personelin Maşı: %lf\n", Employee1.Wage);



    printf("\n................................................\n");

    //Yeni bir personel tanımla(alternatif tanımlama yöntemi)

    struct EmployeeInfo Employee2 = {33, 60000, "Böçüş Par", "Kadın"}; //şu sıranın şaşmaması gerekiyor struct'a göre

    //Employee2 değerlerini yazdır

    printf("Personelin Adı: %s\n", Employee2.Name);
    printf("Personelin Cinsiyeti: %s\n", Employee2.Gender);
    printf("Personelin Yaşı: %d\n", Employee2.Age);
    printf("Personelin Maşı: %lf\n", Employee2.Wage);

    printf("\n................................................\n");

    //Employee2 kopyası oluşturalım yeni bir struct olarak

    struct EmployeeInfo Employee2copy;

    //Employee2 bilgilerini Employee2copy'e kopyalayalım

    Employee2copy = Employee2;

    //Employee2copy değerlerini yazdır

    printf("Personelin Adı: %s\n", Employee2copy.Name);
    printf("Personelin Cinsiyeti: %s\n", Employee2copy.Gender);
    printf("Personelin Yaşı: %d\n", Employee2copy.Age);
    printf("Personelin Maşı: %lf\n", Employee2copy.Wage);




   






    return 0;
}