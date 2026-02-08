#include <stdio.h>
#include "calculator.h"

int main() {
    double a, b, result;
    char op;

    displayTitle();
    displayMenu();

    getInput(&a, &b, &op);
    result = calculate(a, b, op);

    printf("Process: %.2lf %c %.2lf\n", a, op, b);
    printf("Result: %.2lf\n", result);

    return 0;
}
