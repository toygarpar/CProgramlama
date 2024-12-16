// String karakter dizisi birleştirme, kopyalama ve karşılaştırma işlemleri

#include <stdio.h>
#include <string.h>


int main() {

    char text1[20] = "Hello, ";
    char text2[] = "World!";
    char text3[20];

    // concat text2 to text1, sonuç text1'de kalsın
    strcat(text1, text2); 

    //print text1
    printf("%s", text1);
    printf("\n...\n");

    //copy text1 to text3 using strcpy()
    strcpy(text3, text1); //değişken boyutları aynı olmalı hatasız çıkmak için

    //print text3
    printf("%s", text3);
    printf("\n...\n");


    //compare text1 and text3 using strcmp func, string compare

    printf("%d\n", strcmp(text1, text3));  //0
    printf("\n...\n");

    printf("%d\n", strcmp(text1, text2));  //
    printf("\n...\n");

    printf("%d\n", strcmp(text2, text1));  //
    printf("\n...\n");







    return 0;
}
