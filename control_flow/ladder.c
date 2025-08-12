

#include <stdio.h>

int main(){

    int marks = 60;

    if(marks>=90){
        printf("you have achieved A grade\n");
    }
    else if (marks>=75 ){
        printf("you have achieved B grade\n");
    }

    else if (marks >=50){
        printf("you have achieved C grade\n");

    } else if (marks>=35){
        printf("you have passed this exam");
    } else {
        printf("you have failed this exam");

    }
    
    return 0;


}