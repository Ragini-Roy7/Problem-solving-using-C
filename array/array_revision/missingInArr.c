#include <stdio.h>

int main() {
    int arr[] = {11, 12, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int present[max + 1];   // boolean array
    for (int i = 0; i <= max; i++)
        present[i] = 0;     // initialize to false

    for (int i = 0; i < n; i++)
        present[arr[i]] = 1;   // mark as present

    for (int i = 1; i <= max; i++) {
        if (present[i] == 0) {
            printf("Missing number = %d\n", i);
            break;
        }
    }

    return 0;
}
