#include <stdio.h>
int fib(int n)
{
    if(n==1 || n==2)  {
        return 0;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int fib_res= fib(n);
    printf("fibonacci of %d is %d\n",n,fib_res);
    return 0;
}