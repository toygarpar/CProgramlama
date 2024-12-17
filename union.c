//C Programlama Dilinde Union

#include <stdio.h>
#include <string.h>

/*Union -  Bütün değişkenleri union'da tanımlarsınız ama hafıza bunları dönüşümlğ tutar

Hafıza kısıtlamanız varsa union tercih edilir. Union bir tabloda bir observation'ın bir alanını tutabilir.*/


union Veri {
    int i;
    float f;
    char str[30];
};

int main() {

    union Veri data;

    data.i = 10;
    data.f = 230.5;

    strcpy(data.str, "C Programlama Öğreniyorum!");



    printf("Verinin Büyüklüğü: %ld\n", sizeof(data));

    printf("data.i : %d\n", data.i); //ld long unsigned integer
    printf("data.f : %.2f\n", data.f);
    printf("data.str : %s\n", data.str);
    printf("\n................................\n");


    data.i = 111;

    printf("Verinin Büyüklüğü: %ld\n", sizeof(data));

    printf("data.i : %d\n", data.i);
    printf("data.f : %.2f\n", data.f);
    printf("data.str : %s\n", data.str);
    printf("\n................................\n");

    data.f = -303.33;

    printf("Verinin Büyüklüğü: %ld\n", sizeof(data));

    printf("data.i : %d\n", data.i);
    printf("data.f : %.2f\n", data.f);
    printf("data.str : %s\n", data.str);
    printf("\n................................\n");


    //en son eriştiğimiz union değeri dışındakiler abuk sabuk output ediliyor, en son erişilen değer anlamlı






    return 0;
}