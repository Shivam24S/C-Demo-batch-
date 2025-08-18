

#include <stdio.h>

int main(){

    int num, limit;

    printf("enter the starting number\n");

    scanf("%d",&num);

    printf("enter the limit number\n");
    scanf("%d",&limit);


    // entry controlled
    // using while loop


    // while(num<=limit){
    //     printf("%d\n",num);
    //     num++;
    // }


    // exit controlled

    // do while 
    
    // do{
    //     printf("%d\n",num);
    //     num++;
    // }while(num<=limit);


// entry controlled 

for(int i=num;num<=limit;num++){

    printf("%d\n",num);
}


    return 0;

    
}