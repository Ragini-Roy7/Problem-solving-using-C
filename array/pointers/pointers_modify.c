#include <stdio.h>
int main(){
    int a=90;
    int *ptr= &a; //pointing towards a
    printf("%d\n", a); //value at a
    printf("%d\n",*ptr);//value at given address

    *ptr= 99;
    printf("%d\n", *ptr); //dereferncing ptr 
    //value at given address

    printf("Value after change is %d\n",a);
    return 0;


}