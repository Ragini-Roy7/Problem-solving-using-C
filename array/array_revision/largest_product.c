#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4};
    int length = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = 1;

    while (left < length) {
        right = left + 1;
        int product = arr[left];

        while (right < length) {
            product = product * arr[right];
            printf("Product from %d to %d = %d\n", left, right, product);
            right++;
        }
        left++;
    }
}
