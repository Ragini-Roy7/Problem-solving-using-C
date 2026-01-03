// alteranete elements print
//int a[]= {1,2,3,4,5}
// o/p-> 1,3
#include <stdio.h>
// int main(){
//     int n=5;
//     int a[5]= {1,2,3,4,5};
//     for(int i=0;i<n;i+=2){
//         printf("%d element alteranate is %d element\n", i,i+2);
//     }
// }
int alternatesOfArray(int a[],int n){
    for(int i=0;i<n-1;i+=2) {
        printf("%d element alteranate is %d element\n", a[i], a[i+1]);
    }
    // printf("No alternate element found\n ");
    return 0;
}
int main(){
    int a[]= {10,20,30,44,53};
    alternatesOfArray(a,5);
}