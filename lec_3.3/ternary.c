

// ternary operator


// (condition) ? { this will execute if condition is true } : { else this will execute if conation is false }
 

#include <stdio.h>

int main(){

    int a=5, b=10;


   int max = a > b ? a : b;

   printf("the max number is: %d\n",max);

   return 0;

}