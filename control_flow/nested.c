

#include <stdio.h>
#include <stdbool.h>


int main(){

    int age = 10;

    bool hasLicence = false;

    if(age>=18){
        if(hasLicence){
            printf("you can drive vehicle\n");
        }else {
            printf("you have to register for driving licence");
        }
    }else {
        printf("you can't drive vehicle");
    }



}