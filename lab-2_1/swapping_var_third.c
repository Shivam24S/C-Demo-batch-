

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    temp = a; // store a
    a = b;    // put b into a
    b = temp; // put old a into b

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
