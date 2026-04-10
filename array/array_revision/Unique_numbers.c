// #include <stdio.h>
// int main(){
//     int arr[]= {1,2,2,4,67};
//     //1,4,6,7
//     //no of duplicate elements found, need to dec the array size exactly by the same size
//     int length=sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//      int visited[length];

//      //flagging the duplicate elements
//      for(int i=0;i<length;i++){
//         visited[i]=0;
//      }
//     for(int i=0;i<length;i++){
//         for(int j=i+1;j<length-1;j++){
//             if(arr[i]==arr[j]){
//                visited[j]=1;
//                 // count++;
//                 // break; //don`t count same ele again to avoid duplicacy
//             }
//             // int new_len_arr= length-count;
//             // int newArr[new_len_arr];
//             // //  if(count>=1) {
//             //     int new_arr_len= new_arr_len-count;
//             //  }
//              printf("duplicate element found at %d\n",arr[i],arr[j]);
//         }
//         //if count ki value is greater than 1 means duplicate element found , make new array of length exactly of prev_array subtracting no of count
//         //kyunki no of count ==no of elements to be reduced 
//         //and also arr[count], which elements are duplicate i need to also consider
//      printf("Array after removing\n");
//      for(int i=0;i<length;i++){
//         if(visited[i]==0){
//             printf("%d",arr[i]);
//         }
//      }
           
//     }
//    return 0;
// }

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 4, 67};
    int length = sizeof(arr) / sizeof(arr[0]);

    int visited[length];

    // Initialize visited array
    for (int i = 0; i < length; i++)
        visited[i] = 0;

    // Mark duplicates
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;  // mark duplicate index
            }
        }
    }

    // Print only unique elements
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < length; i++) {
        if (visited[i] == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}