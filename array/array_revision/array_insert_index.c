#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // extra space
    int n = 5;
    int index = 5;
    int val = 90;

    if (index >= 0 && index <= n) {
        arr[index] = val;
        n++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
