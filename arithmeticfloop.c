// C Programlama Dili  Varaibles and Arithmetic Expressions 

//  fahr to cel using for statement

#include <stdio.h>

// Print Fahrenheit-Celsius Table
int main() {
   int fahr; //elimination of most of the variables; only fahr remains, and we have made it an int
   
   for(fahr = 0; fahr <=300; fahr = fahr + 20 ) //lower and upper limits and the step size appear only as constants in the for statement
   
        printf("%3d %6.2f\n", fahr, (5.0 / 9.0) * (fahr-32) ); //the expression that computes the Celsius temperature now appears asthe third argument of printf

        printf("\n............................................\n");

    //print the table in reverse order, that is, from 300 degrees to 0
    for(fahr = 300; fahr >=0; fahr = fahr - 20 ) //lower and upper limits and the step size appear only as constants in the for statement
   
        printf("%3d %6.2f\n", fahr, (5.0 / 9.0) * (fahr-32) ); //the expression that computes the Celsius temperature now appears asthe third argument of printf


        return 0;

    
}
