#include <stdio.h>
#include "calculator.h"

double calculate(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0) return a / b;
            printf("Error: divide by zero\n");
            return 0;
        case '%': return (a * b) / 100;
        default:
            printf("Invalid operator\n");
            return 0;
    }
}
//