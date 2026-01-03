// #include <stdio.h>

// int main(){
//     int arr[10],n, sum=0;
//     printf("enter 10 elements of array\n");
//     scanf("%d", &arr[10]);

//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0;i<10;i++){
//         sum+=arr[i];
//     }
//     printf("sum of %d elements are %d\n",n, sum);
    
// }
// #include <stdio.h>

// int main() {
//     int arr[10],n=10, sum = 0;

//     printf("Enter n elements of array:\n");
//     scanf("%d", &n);

//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < 10; i++) {
//         sum += arr[i];
//     }

//     printf("Sum of %d elements is: %d\n", n, sum);
// }

#include <stdio.h>
int main(void){
    int arr[10]; 
    int sum=0; //initialized declared sum as 0
    printf("enter 10 elements\n :");

    for(int i=0;i<10;i++){
        sum +=arr[i];
    }
    printf("Sum of %d elements is : %d\n", 10, sum);
    return 0;
}
