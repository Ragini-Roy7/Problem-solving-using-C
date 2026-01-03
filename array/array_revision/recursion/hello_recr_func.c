#include <stdio.h>
int hello_n(int n){
    if(n==0 || n<0) {
        return 1;
    }
    printf("Hello User\n");
    return  n*hello_n(n-1);
}
int main(){
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    hello_n(n);
    return 0;
}