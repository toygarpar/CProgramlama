// C Programlama Dili  Varaibles and Arithmetic Expressions 

/* ++ operatörünün işleyişi ve işlem yapma*/

#include <stdio.h>

int main() {
    
    int i;
    
    i = 0;
    
    printf("%d\n", i);
    printf("%d\n", i++); //önce mevcut değer yazılacak sonra değer artırılacak
    printf("%d\n", i);
    printf("%d\n", ++i); //önce değer artırılacak sonra yazdırma işlemi yapılacak
    printf("%d\n", i);
    
    
    
    
    return 0;
    
   
    
}