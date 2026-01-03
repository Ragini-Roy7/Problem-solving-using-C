#include <stdio.h>
int sum_n(int i,int n){
    if(i>n) {
        return 0;
    }
    return i+sum_n(i+1, n);
}
int main(){
    // int n;
    // printf("Enter a number\n");
    // scanf("%d", &n);
   int res= sum_n(1,3);
   printf("res %d\n",res);
    return 0;
}