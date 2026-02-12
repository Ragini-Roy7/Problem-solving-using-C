// #include <stdio.h>
// int main(){
//     int arr[]= {5,3,1,6,9};
//     int length= sizeof(arr)/sizeof(arr[0]);
//     int left=0;
//     int right=length-1;

//     while(left<right){
    
//         for(int i=left;i<right;i++){
//             printf("%d",arr[i]);
//         }
//         printf("\n");

//         if(arr[left]>arr[right]){
//             left++;
//         }
//         right--;
//         //end se -1 hote chalega while left<right
           
           
           
//         }
//         printf("remaining\n",arr[left]);        
//     }
#include <stdio.h>

int main() {
    int arr[] = {5,3,1,6,9};
    int length = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = length - 1;

    while(left < right) {

        // print current elements
        for(int i = left; i <= right; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Ishaan eats larger end
        if(arr[left] > arr[right])
            left++;
        else
            right--;
    }

    // final remaining element
    printf("Sister gets: %d\n", arr[left]);

    return 0;
}
