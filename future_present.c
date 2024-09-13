/*===============Katie W===============*/
/*================Lab 3================*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, interest_rate;
    int years;
    double future_value, x;

    printf("Enter Principal: ");
    scanf("\n%lf", &principal);
    printf("Enter Intrest Rate %%: ");
    scanf("\n%lf", &interest_rate);
    printf("Enter Number of Years: ");
    scanf("\n%d", &years);
    printf("With a principal of $%.2f, at an intrest rate of %.2lf%% for %.0d years:", principal, interest_rate, years);
    printf("\nFuture Value: %.2lf", pow((interest_rate/100+1), years)*principal);

    printf("\n\n");

    printf("Enter Future Value: ");
    scanf("\n%lf", &future_value);
    printf("Enter Intrest Rate: ");
    scanf("\n%lf", &interest_rate);
    printf("Enter Number of Years: ");
    scanf("\n%d", &years);
    printf("With a future value of $%.2lf, at an intrest rate of %.2lf%% for %.0d years:", future_value, interest_rate, years);
    x = pow(interest_rate/100+1, years);
    printf("\nPresent Value: %.2lf", future_value/x);

    return 0;
}
