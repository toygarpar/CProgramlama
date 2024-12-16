// Özel karakterler

# include <stdio.h>

int main() {

    char text1[] = "Merhaba\nDünya!";  //  \n newline
    printf("%s", text1);
    printf("\n...\n");


    char text2[] = "Merhaba\tDünya!";  //  \ tab
    printf("%s", text2);
    printf("\n...\n");




    char text3[] = {'m','e','r','h','a','b','a','\0'}; //  \0 kümenin elemanları gibi tanımlama yaptığımızda bitiriş sonlandırma manasında kullanılır
    printf("%s", text3);
    printf("\n...\n");



    char text4[] = "Öğretmen içeri girince, \"Günaydın\" diye seslendi.";
    printf("%s", text4);
    printf("\n...\n");


    char text5[] = "Joe\'s phone has not stopped ringing";
    printf("%s", text5);
    printf("\n...\n");


    char text6[] = "\\ backslash karakteri ters taksim olarak anılır";
    printf("%s", text6);
    printf("\n...\n");







    return 0;
}