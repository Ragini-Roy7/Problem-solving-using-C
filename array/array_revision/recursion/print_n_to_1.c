// #include <stdio.h>
// int print_n(int n)
// {
//     if (n < 1)
//         return 1; //negative numbers
//     return n * print_n(n - 1);
// }
// int main()
// {
//     int n;
//     printf("Enter a number\n");
//     scanf("%d", &n);
//     int num = print_n(n);
//     printf("%d", num);
//     return 0;
// }
#include <stdio.h>
int print_n(int n){
    if( n==0 || n<0)
    return 1;
    //return print_n(n-1); //jo bhi user enter karega usse -1 kar do at each function call
    printf("%d",n);
    print_n(n-1);
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    print_n(n);
}
