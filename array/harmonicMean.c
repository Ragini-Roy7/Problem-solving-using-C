// // #include <stdio.h>

// // int main()
// // {

// //     int n;
// //     int recp;

// //     printf("enter no. of elements:");
// //     scanf("%d", &n);

// //     printf("enter elements:\n");
// //     scanf("%d",&n );

// //     //find reciprocals
// //     //1/a1, 1/a2, 1/a3,....1/an
// //     for(int i=0;i<n;i++){
// //         recp= 1/n;

// //     }
// //     printf("recp of each :\n");

// // }

// // #include <stdio.h>
// // int main(){
// //     int n;
// //     int tot;
// //     int recp;

// //     printf("enter n no. of elements");
// //     scanf("%d", &tot); //5

// //     printf("enter elements you want :\n");
// //     scanf("%d", &n);
// 3
// //     // printf("entered elements are:\n");
// //     // scanf("%d", &n);
// //     for(int i=0;i<tot;i++){
// //      recp= 1/tot;
// //      printf("Recpirocal of %d element is:%d\n",&tot, &recp);
// //     }

// // }

// #include <stdio.h>
// int main()
// {
//     int tot;
//     int num, reciprocal;

//     printf("Enter no. of elements:", tot);
//     scanf("%d", &tot);

//     printf("Enter value of each elements:\n");
//     // scanf("%d",&tot);

//     for (int i = 0; i < tot; i++)
//     {
//         scanf("%f", &num); // taking each element via loop
//         reciprocal = 1.0 / num;
//     }

//     printf("Reciprocal of %.2f= %.4f\n", num, reciprocal);
// }

#include <stdio.h>

int main()
{

    int tot;
    float num, reciprocal;
    float sum = 0.0f;
    float res=0.000f;

    // Step 1: Ask how many elements
    printf("Enter number of elements: ");
    scanf("%d", &tot);

    // Step 2: Input each element one by one
    printf("Enter each element:\n");

    for (int i = 0; i < tot; i++)
    {
        scanf("%f", &num); // take element

        reciprocal = 1.0f / num; // find reciprocal

        // Step 3: Print reciprocal
        printf("Reciprocal of %.2f = %.4f\n", num, reciprocal); // upto 4 floating points

        // printf("DEBUG: Code updated\n");

        // to find sum of each reciprocal

        sum += reciprocal;
        printf("sum of %.4f\n", sum);
    }

    // step 4: div n (ie. tot var) by each reciprocal of elements
     res = tot / sum;
    // res = n/sum of each element reciprocal (ie. n=3, 1.0, 2.0,3.0, recp of 1.0, 2.0,3.0 -> recp sum)
    printf("Harmonic mean of %d element is %.4f\n", tot, res);

    return 0;
}
