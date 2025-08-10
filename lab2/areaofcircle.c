// find the area of circle 


#include <stdio.h>
#define PI 3.14


int main(){

    float area,radius;

    printf("enter the radius of circle:\n");

    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("the area of circle is : %f\n",area);

    return 0;
    

}