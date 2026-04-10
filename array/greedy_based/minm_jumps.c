#include <stdio.h>

int minJumps(int arr[], int n) {
    if (n <= 1)
        return 0;

    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {

        // reached end
        if (i == n - 1)
            return jumps;

        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
        steps--;
        

        // need another jump
        if (steps == 0) {
            jumps++;

            if (i >= maxReach)
                return -1;

            steps = maxReach - i;
          
        }
    }
    return -1;
}
#include <stdio.h>

int main() {
    int arr[] = {1,4,3,2,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = minJumps(arr, n);

    printf("Minimum jumps = %d\n", result);

    return 0;
}