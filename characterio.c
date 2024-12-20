/*
simple example is a program that copies
its input to its output one character at a time:
read a character
    while (charater is not end-of-file indicator)
        output the character just read
        read a 

*/

// C - Character i/o

#include <stdio.h>


//copy input to output; 1st version

int main()
{
    int c;

    c = getchar();
    while (c != EOF) //ctrl +d as input to cause an EOF, to end the program
    {
        putchar(c);
        c = getchar();
    }
}

// USe CTRL - C to end the program