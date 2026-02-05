#include <stdio.h>
 
int equilibrium_point(int arr[],int n){
    int totalSum=0,leftSum=0;

    for(int i=0;i<n;i++){
        //by finding total_Sum
        totalSum+=arr[i];
    }
    //right sum= totalsum- left sum-current itr
    for(int i=0;i<n;i++){
        int rightSum= totalSum- leftSum-arr[i]; 
        if(leftSum==rightSum)
        return i;
        leftSum+=arr[i];
    }
    return -1;
}

// int equil(int arr[],int n){
//     int mid=n/2;
//     int leftSum=0;
//     for(int i=0;i<mid;i++){
//          leftSum+= arr[i];
//     }
//      int rightSum=0;
//      for(int i=mid+1;i<n;i++) {
//         rightSum+=arr[i];
//      }
//      if(leftSum==rightSum) {
//         printf("equilibrium index is %d\n",mid);
//      }else {
//         printf("not in equilibrium\n");
//      }
    
     //mid split karna is not efficient partial test case pass by chance
// }
int main() {
   int arr[5] = {1,3,5,2,2};
    int n = 5;

    int result = equilibrium_point(arr, 5);

    if(result != -1)
        printf("Equilibrium index = %d\n", result);
    else
        printf("No equilibrium index\n");
// int arr[]= {-7,1,5,2,4,3,0};
// equil(arr,7);
    return 0;
}