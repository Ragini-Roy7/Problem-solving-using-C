// sum of first N natural
#include <stdio.h>
int sum = 0,num;
int main()
{
    printf("enter num");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        printf("num * %d is %d\n",i,num*i);
        sum+=sum+i;  
    }
    printf("sum of first N natural num = %d\n", sum);
}