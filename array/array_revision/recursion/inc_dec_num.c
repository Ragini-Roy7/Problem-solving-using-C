// #include <stdio.h>
// int inc_dec(int x,int n){
//     if(x>n) {
//         return 0;
//     }
//     printf("%d\n",x);
//     return inc_dec(x+1,n);
   
// }
// int main(){
//     int n;
//     printf("Enter a number for inc:\n");
//     scanf("%d", &n);
//     inc_dec(1,n);
// }
#include <stdio.h>
int inc_num(int x,int n){
    if(x>n){
        return 0;
    }
    printf("%d\n",x);
    return inc_num(x+1,n);
}
int dec_num(int n){
    if(n==0){
        return 0;
    }
    return dec_num(n-1);
}
int main(){
    int n1;
    printf("enter a num for inc\n");
    scanf("%d",&n1);
    inc_num(1,n1);
    int n2;
    printf("enter a num for dec\n");
    scanf("%d", &n2);
    dec_num(n2);
}