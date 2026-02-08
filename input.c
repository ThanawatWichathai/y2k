#include <stdio.h>
#include "calculator.h"

void getInput(double a, double b, char *op) {
    printf("Enter first number: ");
    scanf("%lf", a);

    printf("Enter operator: ");
    scanf(" %c", op);

    printf("Enter second number: ");
    scanf("%lf", b);
}//end function