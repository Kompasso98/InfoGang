#include <iostream>
double add(double a, double b) {
    return a + b;
}
int main() {
    double num1, num2, result;
    char op;

    printf("=== Standard Calculator ===\n");

            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if ((int)num2 != 0) {
                // Modulo operator requires integer operands
                int r = (int)num1 % (int)num2;
                printf("Result (remainder): %d\n", r);
            } else {
                printf("Error: Division by zero in modulo calculation.\n");
            }
            break;

        default:
            printf("Error: Invalid operator symbol.\n");
    }

    printf("===========================\n");

    return 0;
}