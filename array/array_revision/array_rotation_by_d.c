#include <stdio.h>
int main(){
    int n=7;
    int a[]= {-1,-2,-3,4,5,6,7};
    int d=2;

    printf("%d",a[d]);
    //first element alag print kiya kyunki comma lagana tha iske baad sare elements mein for formatting

    for(int i=d+1; i<n;i++){
        printf(", %d",a[i]);
    }
    for(int i=0;i<d;i++){
        printf(", %d",a[i]);
    }

    // for(int i=0;i>d;i--){
    //     printf(" , %d",a[i]);
    // }
    
    // for(int i=d+1; i<n;i++){
    //     printf(", %d",a[i]);
       
    // }
}