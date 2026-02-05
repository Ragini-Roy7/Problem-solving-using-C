#include <stdio.h>
int main(){
    // int arr[5]= {1,3,5,2,2};
    int arr[7]= {7,1,5,2,-4,3,0};
    //equilibrium points-> leftmost_element_sum == rightmost_element_sum excluding odd terms 
    //like if n=5 then arr[0]+arr[1]== arr[3]=arr[4], arr[2] not counted because its not in rightmost or leftmost 
    //new condition formed -> mid_element do not count (main_condition)

    int n=7,mid= n/2;
    //2
    //int totalsum=0; we can use totalsum-leftmost sum 
    int leftmost_sum=0,rightmost_sum=0;
    for(int i=0;i<mid;i++) {
        //leftmost element access hua 
        //now count 
        leftmost_sum+=arr[i];

    }
    //rightmost element access
    for(int i=mid+1;i<n;i++){
        rightmost_sum+=arr[i];
    }
    //equilibrium poii nt if(leftmost_sum==rightmost_sum)
    if(leftmost_sum== rightmost_sum) {
        printf("Array is in equilibrium\n");
    }
return -1;
}