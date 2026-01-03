#include <stdio.h>
int num;
int main(){
    printf("enter a num:");
    scanf("%d", &num);
    int rem = num %10 ;
    int rev= rem *10 + num /10;
    printf("reverse of %d is %d",num, rev);
}