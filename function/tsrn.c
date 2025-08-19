//  Function takes input (parameters) but does not return a value.

//Use case: When you just want to process inputs and display result directly.



#include <stdio.h>

void sum(int a, int b){


    int total = a+b;

    printf("%d",total);

}


int main(){

    sum(5,6);

    return 0;



}