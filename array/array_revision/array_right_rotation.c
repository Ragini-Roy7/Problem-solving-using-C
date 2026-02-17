#include <stdio.h>
int main(){
    int arr[]= {1,2,3,4,5,6,7};
    int length=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];

    
    //for element to be placed by right side
   temp=arr[length-1];
    printf("%d,",temp);

    for(int i=length-1;i>0;i--){
        arr[i]=arr[i-1];
        printf("%d, ",arr[i]);
    }
}