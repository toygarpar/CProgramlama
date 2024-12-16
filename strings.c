// String karakter dizisi işlemleri
// C code.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    printf("%ld", strlen(ingiliz_alfabesi));    //strlen gözümüzle gördüğümüz hakiki karakterleri sayıyor
    printf("\n...\n");
    printf("%ld", sizeof(ingiliz_alfabesi));   // sizeof  stringin sonunda görmediğimiz \n karakterini de sayıyor
    printf("\n..............\n");


    char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
    
    printf("%ld", strlen(turk_alfabesi));    // string length
    printf("\n...\n");
    printf("%ld", sizeof(turk_alfabesi));           //türkçe karakterler çift karakter sayılıyor
    printf("\n..............\n");



    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";       // tanımlama esnasında boyutunu 50 olaak veriyoruz
    printf("%ld", strlen(deneme));    // strlen uzunluğu
    printf("\n...\n");
    printf("%ld", sizeof(deneme));      //sizeof array hafizada kapladığı boyutu veriyor
    printf("\n..............\n");  
    
    
    
    
    
    
    
    
    return 0;
}