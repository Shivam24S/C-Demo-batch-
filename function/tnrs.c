

//Function takes no input but returns a value.

// Use case: When input is fixed inside the function but you need a result.

#include <stdio.h>

int getYear(){

    int year=2025;
    return year;

}

int main(){


    int currentYear = getYear();

    printf("the current year is %d\n",currentYear);

    return 0;







}