#include <stdio.h>
int main(){
    int arr[]= {-1,-2,-3,4,5,6,7};
    int d=2;
    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i=d;i<length;i++){
        arr[i-d]=arr[i];
        //element  will shift towards right
        printf("%d, ",arr[i]);
    }
    //rotate by d-places using mathematical relation derived
    //arr[0]-> n-d = 7-2=5
    //arr[1]-> n-d+1= 6
    //arr[2]->n-d+3= 7
    int temp[]= {-1,-2};
    for(int i=length-d;i<length;i++){
        arr[i]= temp[i-(length-d)];
        printf("%d ",temp[i-(length-d)]);
    }
}