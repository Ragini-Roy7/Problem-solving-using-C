#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int start = 0;
    int currentSum = 0;

    for (int end = 0; end < n; end++) {
        currentSum += arr[end];   // expand window

        while (currentSum > target && start <= end) {
            currentSum -= arr[start];  // shrink window
            start++;
        }

        if (currentSum == target) {
            printf("Output: [%d, %d]\n", start + 1, end + 1); // 1-based index
            return 0;
        }
    }

    printf("No subarray found\n");
    return 0;
}
