#include <stdio.h>

int main(void) {
    int tot;
    float num, reciprocal;

    printf("Enter number of elements: "); //step 1
    if (scanf("%d", &tot) != 1) return 0; //negative numbers

    printf("Enter each element:\n");
    for (int i = 0; i < tot; i++) {
        if (scanf("%f", &num) != 1) return 0;   // read as float
        if (num == 0.0f) {
            printf("Element %d is zero, reciprocal undefined.\n", i+1);
            continue;
        }
        reciprocal = 1.0f / num;                // use 1.0f -> float division
        printf("Reciprocal of %.4f = %.6f\n", num, reciprocal);
    }
    
}
