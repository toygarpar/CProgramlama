//C - symbolic constants
/*
A #define line defines a symbolic name or symbolic constant to be a particular string of characters:

#define name replacement list
*/

#include <stdio.h>

//notice that the symbolic constants are written in uppercase letters to indicate that they are not variables
//notice that no semicolon appears at the end of a #define line
#define LOWER 0 //lower limit of the table
#define UPPER 300 //upper limit
#define STEP 20 //step size

// Print Fahrenheit-Celsius Table
int main() {
   int fahr; //elimination of most of the variables; only fahr remains, and we have made it an int
   
   for(fahr = LOWER; fahr <=UPPER; fahr = fahr + STEP ) //lower and upper limits and the step size appear only as constants in the for statement
   
        printf("%3d %6.2f\n", fahr, (5.0 / 9.0) * (fahr-32) ); //the expression that computes the Celsius temperature now appears asthe third argument of printf

        

    


        return 0;

    
}
