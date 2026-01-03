// this logic fails kyunki arr[i]- index-> 1-3= -2 negative indices, not possible
//  #include <stdio.h>

// void insertionAtIndex(int arr[], int n,int  index, int value) {
//     //step 1 user defined index
//     int temp= arr[index]; // temp=2
//     for(int i=0;i<n;i++) {
//         arr[i-index]= arr[i]; //current element se given index pichhe jayega or curr arr ki iteration m update ho jayega
//         //given index ki val se arr[i] is getting placed
//     }
//     arr[n]= arr[index];
//     // if(arr[index]!=arr[value]) {
//         arr[index]=arr[value];
//     // }

// }
// int main() {
//     int arr[]= {1,2,3,4,5};
//     int n=5, index=2, value=90;
//     insertionAtIndex(arr,n,index,value);
//     //to print the elements
//     for(int i=0;i<=n;i++) {
//         printf("%d, ", arr[i]);
//     }
//     printf("\n");
// }

// #include <stdio.h>
// int main()
// {
//    int n, i, d , k,value;
//    int temp;
//    // d-> no of times rotation req
//    printf("enter size of array\n");
//    scanf("%d", &n);
//    int arr[n];

   // asking ele
   // printf("enter elements\n");
   // for (int i = 0; i < n; i++)
   // {
   //    scanf("%d, ", &arr[i]);
   // }

   // print ele
   // printf("elements of array\n");
   // for (int i = 0; i < n; i++)
   // {
   //    printf("%d, ", arr[i]);
   // }
   // printf("\n");

   //  int temp=d ;
   // user ne jo d diya hai woh temp mein store kiya taki further we can use this temp
   // temp mein d ko dir assign nhi kar sakte kyunki d= no. after ele to be displaced ie. {4,5,1,2,3} d=3 --> temp = {2,3}
   //   printf("enter d:\n");
   //  scanf("%d", &d);
   //  int temp[n];
   //  int k=0;

   // printf("Elements after d:\n");
   // for (int i = d; i < n; i++)
   // {
   //    printf("%d ", arr[i]);
   // }

   //  for(int i=d;i<n;i++) {
   //    //loop d se start ho rha

   //  }
   // printf("elements after d\n");
   // for(int i=0;i<d;i++){
   //    printf("%d", arr[i]);
   //    temp[k++]=arr[i];
   // }
   //elements after d-> ko at the end of array mein daalna
   //   arr[n-d]; formula to calc no. of elements to be shifted at end of arr
   //   arr[n-d+i];
  
//    for(int i=0;i<n;i++){
//       arr[i]=temp[i];
//    }
//    printf("rotated array\n");
//    for(int i=0;i<n;i++){
//    printf("%d", arr[i]);
// }
// return 0;
// }

#include <stdio.h>

int main() {
    int n, d;

    printf("enter size of array\n");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter d:\n");
    scanf("%d", &d);

    int temp[n];
    int k = 0;

    // STEP 1: elements after d
    printf("Elements after d:\n");
    for(int i = d; i < n; i++) {
        printf("%d ", arr[i]);
        temp[k++] = arr[i];
    }

    // STEP 2: elements before d
    printf("\nelements to be shifted:\n");
    for(int i = 0; i < d; i++) {
        printf("%d ", arr[i]);
        temp[k++] = arr[i];
    }

    // STEP 3: Copy back into arr
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("\nFinal Rotated Array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
