// area of triangle

#include<stdio.h>

int main(){

    float area,breadth,height;

    printf("enter the breadth:\n");

    scanf("%f",&breadth);

    printf("enter the height:\n");

    scanf("%f",&height);

    area = 0.5 * breadth * height;

    printf("the area of triangle is:%f\n",area);

    return 0;



}