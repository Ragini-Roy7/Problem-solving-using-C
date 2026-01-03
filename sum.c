#include <stdio.h>
int main(){
    int arr[10];
    int sum=0;
    printf("enter 10 elements:\n");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<10;i++){
        sum+=arr[i];
    }
    printf("sum of 10 elements is :%d\n", sum);
}