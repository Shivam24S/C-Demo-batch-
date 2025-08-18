//  Function takes input (parameters) but does not return a value.

//Use case: When you just want to process inputs and display result directly.



#include <stdio.h>


void sum(int a,int b){

    int total = a+b;

    printf("the sum of the numbers: %d\n",total);

}


int main(){

    sum(10,20);
    return 0;

}