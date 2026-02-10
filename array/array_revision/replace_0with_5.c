#include <stdio.h>
int main(){
    int arr[]= {1,0,0,4};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]==0){
            arr[i]=5;
        }
    }
    for(int i=0;i<length;i++){
        printf("%d",arr[i]);
    }
    return 0;
}