//non-recursive
// #include <stdio.h>
// int sum_of_digits(int n){
//     int givenNum=123;
//     int res= givenNum / 10; 
//     //123 / 10 = 12
//     int hundred_dig= res /10; 
    
//     int tenth_dig= res % 10;
//     int ones_dig= 10 % givenNum;
//     printf("%d %d %d\n", hundred_dig, tenth_dig, ones_dig);
//     if(givenNum==0){
//         return 0;
//     }
//     return hundred_dig+ tenth_dig+ones_dig;
// }
// int main(){

//     // int n;
//     // printf("enter num\n");
//     // scanf("%d", &n);
//     sum_of_digits(123);
// }

int sum_of_digits(int n){
    if(n==0) 
    return 1;

    return (n %10) + sum_of_digits(n/10);
}
int main(){
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    sum_of_digits(n);
}