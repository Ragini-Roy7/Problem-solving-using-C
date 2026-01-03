#include <stdio.h>
int main()
{
    //     int a=10,b=11;
    //     int *p,*q;
    // int p= &a; //10
    //  q=p; //must give some warning or error
    //  printf(" a= %d %d %d", a, *p,*q);
    // 10 , val at address *p->10, val at address *q->

    int a = 10, b = 11;
    int *p, *q;
   //p → pointer variable hai jo ADDRESS hold karta hai
//  *p → us address pe jo VALUE rakhi hoti hai wo deta hai
    p = &a; //10
    q = p; //10

    printf("a = %d %d %d", a, *p, *q);
    //ptr p -> pointing towards a
    //ptr q has not been initialised , now its poinitng towards ptr p n ptr p-> is pointing towards var a ie. 10
}