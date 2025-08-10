

// ternary == if else 

// if condition true ? <this code execute > or else <this code execute>  

// condition ? < > : <>

// condition ? value_if_true : value_if_false;


#include <stdio.h>
int main() {
    int age = 18;
    char *result = (age >= 18) ? "Adult" : "Minor";
    printf("%s\n", result); 
    return 0;
}
