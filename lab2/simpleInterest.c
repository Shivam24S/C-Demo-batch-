// calculate the interest 


#include <stdio.h>

int main() {
    float amount, rate, time, interest;

    printf("Enter the principal amount:\n");
    scanf("%f", &amount);

    printf("Enter the rate (in %%):\n");
    scanf("%f", &rate);

    printf("Enter the duration (in years):\n");
    scanf("%f", &time);

    interest = amount * rate * time / 100;

    printf("The interest amount is: %.2f\n", interest);

    return 0;
}
