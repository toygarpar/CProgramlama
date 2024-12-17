//Değişken Adreslerine Erişim

/* & İşareti ve Değişken Adresi Kavramı

Address -  bellekte bir yerde tutulur ve bu yerlerin bir adresleri var. Programlar gidip o adreslere o adreslerin içeriğini okuyorlar.*/


#include <stdio.h>

int main() {


    //declarations

    char karakter = 'C';
    int  numint = 1;
    float numf = 10.4f;
    long long long_int = 989898989ll;


    //Ampersand - and per se and - olarak da anılan & işareti ile herhangi bir değişkenin bellekteki adresi alınabilir


    /*
    Memory addresses should use the %p format specifier in printf, not %s, %ls, %f, or %lln.
    
    %p expects a void* pointer, so you should cast the addresses to (void*) to ensure proper printing.    
    */

    // Print variable values with their memory addresses
    printf("karakter değişkeninin değeri = %c, karakter değişkeninin adresi = %p\n", karakter, (void*)&karakter);
    printf("numint değişkeninin değeri = %d, numint değişkeninin adresi = %p\n", numint, (void*)&numint);
    printf("numf değişkeninin değeri = %.2f, numf değişkeninin adresi = %p\n", numf, (void*)&numf);
    printf("long_int değişkeninin değeri = %lld, long_int değişkeninin adresi = %p\n", long_int, (void*)&long_int);

    








    return 0;
}