#include <stdio.h>

int searchArray(int arr[], int n, int k) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == k) {
            printf("element found at index: %d\n", i);
            return i;
        }
    }
}
int main() {
    int arr[]= {1,2,3,4,5};
    searchArray(arr, 5,4);
}