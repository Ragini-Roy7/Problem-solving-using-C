// #include <stdio.h>
// int main(){
//     int n;
   
//     printf("enter no. of element");
//     scanf("%d", &n);

//     //input ele
//     int arr[n];
//     printf("enter those elements\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i] );

//     }
//     printf("you entered  elements\n");
//     for(int i=0;i<n;i++){
//         if(i==n-1) //to not put comma at n-1
//         printf("%d", arr[i]);
//         else {
//         printf("%d, ", arr[i]);} //to put comma after each ele
//     }
//     printf("\n");

//      for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             printf("zero found at index %d\n",i);

//         }
// }

//   //to remove zero , we need dynamic. arr
//   //count non-zero ele
//   int count=0;
//   for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//        count+=count++;
//     }
//   }
//   //alloc new arr using malloc
//   int *newArr = malloc(count * sizeof(int));

//   //copy new non zero ele
//   int i;
//   for(int j=0;j<n;j++){
//     if(arr[i]!=0){
//         newArr[j]= arr[i];
//         //copied newArr[j] into arr[i]
//         j++;
//     }
//   }
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));   // allocate original array

    printf("Enter your elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Count non-zero elements
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            count++;
        }
    }

    // Step 2: Allocate new array for non-zero elements
    int *newArr = malloc(count * sizeof(int));

    // Step 3: Copy only non-zero elements
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            newArr[j++] = arr[i];
        }
    }

    // Print new array
    printf("Array after removing zeros:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);
    free(newArr);

    return 0;
}
