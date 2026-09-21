#include <stdio.h>

int main(void) {
    int choice;
    float a, b;

    while (1) {
        printf("\n===== BASIC CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        if (choice == 5) {
            printf("Exiting... Thank you!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        if (scanf("%f %f", &a, &b) != 2) {
            printf("Invalid number input.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;
            case 2:
                printf("Result = %.2f\n", a - b);
                break;
            case 3:
                printf("Result = %.2f\n", a * b);
                break;
            case 4:
                if (b == 0.0f) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2f\n", a / b);
                }
                break;
        }
    }

    return 0;
}
