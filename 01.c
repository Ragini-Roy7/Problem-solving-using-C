// #include <stdio.h>
// int num = 0;
// int count = 0;
// int main()
// {
//     printf("enter num");
//     scanf("%d", &num);
//     while (num <= 100)
//     {
//         if (num % 2 == 0)
//         {
//             printf("divisble by 2\n");
//             count = count++;
//             printf("total numbers div by 2\n",count);
            
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// int num;
// int count=0;
//      int isDivisbleby2() {
//         printf("enter a num ");
//         scanf("%d", &num);
//         if(num % 2==0 && num >=1 && num <=100) {
//             count=count+1;
//         }
//         printf("total numbers divisble by 2 : %d",count);
//       }
    
// int main(){
// isDivisbleby2();
// }
#include <stdio.h>

int count = 0;  

void isDivisibleBy2() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num >= 1 && num <= 100) {
        count = count + 1;
    }

    printf("Total numbers divisible by 2: %d\n", count);
}

int main() {
    isDivisibleBy2();

    return 0;
}
