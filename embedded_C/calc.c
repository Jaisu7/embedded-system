#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        // Input numbers
        printf("\nEnter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Display menu
        printf("\n===== Simple Calculator =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Perform operation based on choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed!\n");
                }
                break;
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                return 0;  // Exit program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
