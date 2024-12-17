// C Programlama Dili  Varaibles and Arithmetic Expressions 

//  cel to fahr =  32  + 9/5 * c

#include <stdio.h>

// Print Fahrenheit-Celsius Table
int main() {
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0; // lower limit of temp scale
    upper = 300; // upper limit 
    step = 20;  //step size
    
    celsius = upper;
    
    while (celsius  >= lower) {
        fahr = ((9.0 / 5.0) * celsius) + 32.0;
        printf("%6.2f\t%6.2f\n", celsius, fahr);
        celsius = celsius -  step;
    }
    
    
}