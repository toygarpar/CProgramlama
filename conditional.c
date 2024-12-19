//C - Conditional Statements

//Boolean values are true and false, and C has a bool data type.

#include <stdio.h>
#include <stdbool.h>

int main () {

    bool IsProgrammingGreat = true;
    bool IsProcrastinatingGood = false;    

    printf("Is programming great? %d\n", IsProgrammingGreat); //1 (true) döndürecek
    printf("Is procrastinating good? %d\n", IsProcrastinatingGood); //0 (false) döndürecek

    printf("\n.........\n");


    int x = 1;
    int y = 2;

    printf("x == y: %d\n", x == y); //0 (false) döndürecek
    printf("x != y: %d\n", x != y); //1 (true) döndürecek
    printf("x > y: %d\n", x > y); //0 (false) döndürecek
    printf("x < y: %d\n", x < y); //1 (true) döndürecek
    printf("x >= y: %d\n", x >= y); //0 (false) döndürecek
    printf("x <= y: %d\n", x <= y); //1 (true) döndürecek
   

    return 0;
}