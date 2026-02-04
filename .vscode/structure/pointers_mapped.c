#include <stdio.h>
int main(){
    int a=100;
    int *p=&a;
    a=100+50;
    printf("value of a is now %d\n", *p);
}