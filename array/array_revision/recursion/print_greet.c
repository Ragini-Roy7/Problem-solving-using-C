#include <stdio.h>

int print_greet(int n){
    if(n<1) //base case .evaluating negative numbers
    return 1;
    printf("Good morning\n");
    return n*print_greet(n-1);
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    //calling the function
    print_greet(n);
    return 0;
}