#include <stdio.h>
int stairpath(int n){
   if(n==0 || n<0) {
   
   return 1;
   }
    
    return stairpath(n-1)+(n-2)+(n-3);
}
int main(){
    int n;
    printf("Enter no. of stair\n");
    scanf("%d",&n);
    int no_of_ways= stairpath(n);
    printf("No. of possbile ways to reach %d stairs is %d\n",n,no_of_ways);
    return 0;
}