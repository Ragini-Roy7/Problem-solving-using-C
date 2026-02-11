// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     int arr[]= {8,8,6,2,1};
//     int length=sizeof(length)/sizeof(arr[0]);
//     int k=0; //num of unique elements
//     int res[length];

//     for(int i=0;i<length;i++){
//         bool isDuplicate=false;

//         for(int j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 isDuplicate=true;
//                 break;
//                 //duplicate found , now add this duplicate within arr[i]
//             }
//         }
//             if(!isDuplicate){
//                 //if not duplicate,inc number of unique elements by +1
//                 res[k++]=arr[i];
//             }
//         }
//         //printing new array
//         for(int i=0;i<k;i++){
//             printf("%d",res[i]);
//         }
       
//     }
#include <stdio.h>

int main() {
    int arr[] = {8, 6, 2, 1, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res[n];
    int k = 0;

    // build unique array
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            res[k++] = arr[i];
        }
    }

    // print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // print unique array
    printf("\nUnique array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
