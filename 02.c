//table of given user num
#include <stdio.h>
int num;
int main(){
    
    printf("enter num ");
    scanf("%d", &num);
    for(int i=1;i<=10;i++){
        printf("num * %d is %d \n",i, i*num);
    }
}