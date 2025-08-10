

// logical operator 

//AND  && --> true if both condition is true
// OR  || --> true if one condition is true
// NOT !  --> reverse true/false


#include <stdio.h>
#include <stdbool.h>

// And example

int main(){

    int age =18;

    bool hasLicence =true;

    bool hasLearnerLicence = false;


    // AND

    if(age >=18 && hasLicence ){
        printf("you can drive vehicle\n");

    }

    // OR 

    if(age >= 18 || hasLearnerLicence){
        printf("you are eligible for drive only if you have learner licence\n");
    }

    // NOT

    if(!hasLicence){
        printf("without licence you can't drive\n");
    }



    return 0;

}
