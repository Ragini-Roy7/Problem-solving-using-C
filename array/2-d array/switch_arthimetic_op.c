#include <stdio.h>

int main() {
    int choice, n;
    float num, res;

    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo (only for integers)\n");
    scanf("%d", &choice);

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%f", &res);  

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        switch (choice) {
            case 1: // addition
                res = res + num;
                break;

            case 2: // subtraction
                res = res - num;
                break;

            case 3: // multiplication
                res = res * num;
                break;

            case 4: // division
                if (num == 0) {
                    printf("Error: Cannot divide by zero!\n");
                    return 0;
                }
                res = res / num;
                break;

            case 5: // modulo
                printf("Modulo works only with integers.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
                return 0;
        }
    }

    printf("Result = %.2f\n", res);

    return 0;
}
