// #include <stdio.h>
// int main(){
//     int n; 
//     printf("Enter n no. of elements: \n");
//     scanf("%d", &n); 
//     int arr[n];

//    for(int i=0;i<n;i++){
//     printf("entered elements are:\n", arr[n]);
//     scanf("%d", &arr[n]);
//    }

//     return 0;
// }

#include <stdio.h>

int main() {
    int n;

    printf("Enter n number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Entered elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
