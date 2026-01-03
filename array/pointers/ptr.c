#include <stdio.h>
int main() {
    int a=10, b=9;
    int *p=&a; //address of a, refernces ->a
    int *q=&b; //references->b
    // *q=&b; //overwritten by address of b (referencing op) 
    // printf("address of (%d) is %p\n",a,(void*)p);
    // printf("address of (%d )is %p\n ",b,(void*)q);
    // printf("address of (%d) is %p\n", b, (void*)q);

    //values access
    // printf("value at p: %d\n", *p);
    // printf("value at q is %d\n",*q);

    printf("value at a is %d\n",*(&a)); // *(address of a)
    printf("value at b is %d\n", *(&b)); 

    printf("address of a is %x\n", &a);
    printf("address of b is %x\n", &b);
    //kyunki p ptr is pointing towards ->a 
    printf("address of a is %x\n", p);

}