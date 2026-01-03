#include <stdio.h>

void leftRotationArray(int arr[],int n) {
    int temp= arr[0]; 
    //kyunki 0th index ki val -> ko n-1 index par shift karana hai isliye holding it into temp var
    for(int i=1;i<n;i++) {
       //i-1 means ek index prev shift karna hai   
        arr[i-1]= arr[i];
    }
     arr[n-1]= temp;
}

int main(void){
    int arr[]= {10,20,30,40,50};
    int n=5;
    leftRotationArray(arr,n);
    for(int i=0;i<n ;i++) {
     printf("%d, ", arr[i]);
    }
    printf("\n");
}