//Verilen bir karakterin alfabetik olup olmadığının belirlenmesi

#include <stdio.h>

int main() {
    char karakter;
    printf("Enter a character: "); //Türkçeye özel karakter girmeyin!
    scanf("%c", &karakter);

    if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
        printf("%c :Alfabetik bir karakter girdiniz\n", karakter);
    else
        printf("%c : Alfabetik bir karakter değil\n", karakter);

    return 0;
}
