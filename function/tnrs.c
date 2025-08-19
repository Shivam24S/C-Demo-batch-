

//Function takes no input but returns a value.

// Use case: When input is fixed inside the function but you need a result.


#include <stdio.h>


int getYear(){

    int currentyear=2025;

    return currentyear;



}

int main(){

int year = getYear();

printf("%d",year);


return 0;

}