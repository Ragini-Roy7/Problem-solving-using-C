#include <stdio.h>
int increasing_fun(int x,int n){
    if( x>n){ //kyunki n==0 karne par since yeh inc fn hai toh kabhi base case kaam karega hi nhi isliye extra parameter ke through base case lagayan jab x ki value n se badi hogi (ex n=5,x =6 -> x>n , toh return ho jayega phir) 
        return 0;
    }
   printf("%d\n",x);
    return increasing_fun(x+1,n);
}
int main(){
    int n;
   printf("Enter a number\n");
   scanf("%d",&n); //7
   increasing_fun(1,n);
   return 0;
}