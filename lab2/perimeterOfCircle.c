
#include <stdio.h>
#define PI 3.14

int main(){

    float radius, perimeter;

    printf("enter the radius of the circle:\n");

    scanf("%f",&radius);

    perimeter = 2 * PI * radius;

    printf("the perimeter of circle is: %f\n",perimeter);


    return 0;

}