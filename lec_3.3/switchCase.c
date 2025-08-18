




#include <stdio.h>


int main(){

    int choice;

    printf("select options\n 1.tea \n 2.coffee\n 3.soda\n");

    scanf("%d",&choice);



    switch(choice){

        case 1:{
            printf("you have selected tea\n");
            break;
        }

        case 2:{
            printf("you have selected coffee\n");
            break;
        }

        case 3:{
            printf("you have selected soda\n");
            break;
        }
        
        default:{
            printf("invalid choice please select properly\n");
        }
        return 0;

    }


}