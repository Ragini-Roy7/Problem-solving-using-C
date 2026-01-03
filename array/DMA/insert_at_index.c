// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n=5, newSize=6,value=60,i;
//     int initial_Arr[]= {1,2,3,4,5};
//     //newSize-> dynamic arr index-> given index (newIndex) n->old array size value-> val to be inserted
     
//     printf("Array elements are\n", initial_Arr);
//     for(int i=0;i<n;i++) {
//         printf("%d\n",initial_Arr[i]);
//     }
//    //creating dynamic array
//    int *arr= (int*) malloc(n*sizeof(int)); 
//    if(arr==NULL) {
//     printf("Mem can not be assigned\n"); 
//     return 1;
//    }
// //    condition just to make algo more efficient later
// //    if(arr==NULL) {
// //     printf("Mem can not be assigned\n");
// //    }
//    //allocate new size using realloc()
// //    if(newSize> n){
// //     arr= (int*) realloc(arr,newSize*sizeof(int));
// // }
// for(int i=0;i<n;i++) {
//     arr[i]= initial_Arr[i];
// }

// if(newSize>n ) {
//     arr= (int*) realloc(arr, newSize*sizeof(int));
//     // for(int i=0;i<newSize;i++){
//     // arr[i]= newSize; }
//     //error-> old values destroy ho rhi isliye un values ko copy karna hoga or phir at the end based on condition newSize > n (oldSize)
//     if(arr==NULL) {
//         printf("Mem allocation not successfull\n");
//     }
// }
// //newSize < n -> oldArray has greater mem space -> means no new element can be inserted
// else {
// // logic for later part
// printf("Not possible\n");
// }
// free(arr);

// }
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 5;                     // old size
    int index = 2;                 // jahan value insert karni hai
    int value = 60;                // jo value insert karni hai
    int initial_Arr[] = {1,2,3,4,5};

    printf("Old Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ", initial_Arr[i]);
    }
    printf("\n\n");


    // STEP 1: dynamic array banate hain
    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory not allocated\n");
        return 1;
    }

    // STEP 2: old array ko dynamic array me copy karo
    for(int i=0;i<n;i++){
        arr[i] = initial_Arr[i];
    }

    // STEP 3: new size = old size + 1
    int newSize = n + 1;

    // STEP 4: array size increase using realloc
    arr = (int*)realloc(arr, newSize * sizeof(int));
    if(arr == NULL){
        printf("Reallocation failed\n");
        return 1;
    }

    // STEP 5: shift elements right (important!)
    // move arr[n-1] → arr[n]
    // move arr[n-2] → arr[n-1]
    for(int i = newSize - 1; i > index; i--){
        arr[i] = arr[i - 1];
    }

    // STEP 6: insert value at index
    arr[index] = value;

    // STEP 7: print final array
    printf("New Array after insertion:\n");
    for(int i=0; i<newSize; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}


