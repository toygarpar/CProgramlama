// C Programlama Dili  Varaibles and Arithmetic Expressions 

// C Programlama Dili  Varaibles and Arithmetic Expressions 

//  Celsius=(5/9)(F-32)

#include <stdio.h>

// Print Fahrenheit-Celsius Table
int main() {
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0; // lower limit of temp scale
    upper = 300; // upper limit 
    step = 20;  //step size
    
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    
}
