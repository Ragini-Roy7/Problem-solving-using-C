#include <stdio.h>
void recursion(int n){
    if(n==6){
        return;
    }
    printf("recursion level %d\n",n+1);
    recursion(n+1);
}
int main(){
    recursion(1);
    return 0;
}
