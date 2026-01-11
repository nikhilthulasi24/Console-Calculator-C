#include <stdio.h>

int main() {
    int option;
    float a, b;

    while (1) {
        printf("\n--- Simple Calculator ---\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("5) Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        if (option == 5) {
            printf("Calculator closed. Bye!\n");
            break;
        }

        if (option < 1 || option > 5) {
            printf("Wrong option! Try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        if (option == 1) {
            printf("Result = %.2f\n", a + b);
        }
        else if (option == 2) {
            printf("Result = %.2f\n", a - b);
        }
        else if (option == 3) {
            printf("Result = %.2f\n", a * b);
        }
        else if (option == 4) {
            if (b == 0) {
                printf("Cannot divide by zero.\n");
            } else {
                printf("Result = %.2f\n", a / b);
            }
        }
    }

    return 0;
}
