//rotate array by one
//n
#include <stdio.h>
int main(){
    int arr[]= {1,2,3,4,5,6,7};
    //single rotation by left
    int length=sizeof(arr)/sizeof(arr[0]);
    
    int temp=arr[0];
    for(int i=1;i<length;i++){
        arr[i-1]=arr[i];
        //every element is shifting towards left by-1 now it becomes current index of each element excluding at n-1
        printf("%d, ",arr[i]);
    }
    arr[length-1]= temp;
    //temp is pointing towards 0th index aka first element so shifting it at length of array
    printf("%d",temp);

}