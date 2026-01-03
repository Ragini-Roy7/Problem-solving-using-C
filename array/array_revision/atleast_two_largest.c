// #include <stdio.h>
//     int main(){
//     int n=5;
//     int a[5]= {1,2,3,4,5};
//     int largest=a[0]; //assumption
//     int sec_largest=-1;
    
//     for(int i=0;i<n;i++){
//         if(a[i]>largest){
//             printf("%d is largest element\n",largest);
//         }
      
//             for(int i=0;i<n;i++){
//                   if(a[i]==sec_largest){
//                     continue;
//                     // printf("%d is second largest element\n", sec_largest);

                
//             }
//             if(a[i]> sec_largest){
//                 sec_largest=a[i];
//             }
//         }

//     }
//      if (sec_largest == -1) {
//         printf("No second largest element\n");
//     } else {
//         printf("Second largest = %d\n", sec_largest);
//     }

//     }

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;

    int largest = a[0];

    // Step 1: Find largest
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    int secondLargest = -1; // or any very small number

    // Step 2: Find second largest by skipping largest
    for (int i = 0; i < n; i++) {
        if (a[i] == largest) {
            continue;  // skip largest element
        }

        if (a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }

    // If second largest doesn't exist (all elements same)
    if (secondLargest == -1) {
        printf("No second largest element\n");
    } else {
        printf("Second largest = %d\n", secondLargest);
    }

    return 0;
}

