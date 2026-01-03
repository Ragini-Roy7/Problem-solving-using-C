// #include <stdio.h>

// int fact(int n) {
//     if (n < 0) {
//         return -1;  // error case for negative numbers
//     }
//     if (n == 0 || n == 1) {
//         return 1;   // base case
//     }
//     return n * fact(n - 1);  // recursive case
// }

// int main() {
//     int n;
//     printf("Enter a number\n");
//     scanf("%d", &n);

//     int result = fact(n);  // store the return value

//     if (result == -1) {
//         printf("Factorial is not defined for negative numbers\n");
//     } else {
//         printf("Factorial is %d\n", result);
//     }

//     return 0;
// }

#include <stdio.h>
int fact(int n) {
    if (n < 0) { //negative numbers are also base case
        return -1; 
    }
    if (n == 0 || n == 1) { // 0 and 1 both factorial is 1 
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int res= fact(n);
    printf("Factorial of %d is %d\n",n,res);
    return 0;

}