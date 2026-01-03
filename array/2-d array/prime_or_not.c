#include <stdio.h>
int main(){
    int n;
    printf("enter no.\n");
    scanf("%d", &n);

    // for(int i=2;i<n/2;i++) {
    //     if(n% i ==0){
    //         printf("%d is not prime\n");

    //     }else {
    //         printf("%d is prime\n");
    //     }
    // }
    for(int i=2;i*i<=n;i++){
        if(i % n ==0){
            printf("%d is not prime\n",n);
        }
    }
    printf("%d is prime\n",n);
    return 0;
}