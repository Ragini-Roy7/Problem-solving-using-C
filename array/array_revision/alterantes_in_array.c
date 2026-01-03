#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a)/sizeof(a);
    printf("Alternate elements are: ");
    for(int i = 0; i < n; i += 2) { // i+=2 for alternate elements
        printf("%d ", a[i]);
    }
    return 0;
}