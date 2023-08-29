#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    char choice;

    do {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op); // Notice the space before %c to consume any whitespace or newline characters.

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch(op) {
            case '+':
                printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                else
                    printf("Cannot divide by zero.\n");
                break;
            default:
                printf("Invalid operator.\n");
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &choice); // Consume newline left in the input buffer

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting.\n");

    return 0;
}
