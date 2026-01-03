// #include <stdio.h>
// int main()
// {
//     int n;

//     printf("enter no. of elements:\n");
//     scanf("%d", &n);

//     // printf("Enter those elements:\n", arr[n]);
//     // printf("You entered %d element in %d sized arr:\n", arr[n], n);
//     // printf("Entered elements are :\n");
//     // for(int i=0;i<n;i++){
//     //     printf("%d", arr[i]);
//     // }

//     int arr[n];

//     // input those elements
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // print elements with index
//     printf("\nArray elements with their index :\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("arr element  %d\n at %d\n ", arr[i], i);
//     }

//     // ask user to enter key element to search for
//     int key;
//     printf("enter  key element:\n");
//     scanf("%d\n", &key);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;

//     printf("Enter number of elements:\n");
//     scanf("%d", &n);

//     int arr[n];

//     // input elements
//     printf("Enter elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // print elements
//     printf("\nEntered elements are:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     // fflush(stdin);
//     //  to clean buffer ie. many usages of scanf

//     // print element with index
//     printf("\nArray elements with their index:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Element %d is at index %d\n", arr[i], i);
//     }

//     // ask for key
//     int key;
//     printf("\nEnter key element to search:\n");
//     scanf("%d", &key);

//     // condition for key==arr[i]
//     for (int i = 0; i < n; i++)
//     {
//         if (key == arr[i])
//         {
//             printf("Element %d  found at %d index\n", key, i);
//             printf("Element found :)\n");
//             break;
           
//         }
//           //conceptually this logic correct lekin loop ke andar likhne se every iteration this gets repeated.
//         //  if(key!=arr[i]){
//         //     printf("Element %d not found\n",key);
//         //  } 
//      if(i== n-1){
//         printf("Element %d not found\n", key);
//      }
//     }
     

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    // input elements
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print elements
    printf("\nEntered elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    // fflush(stdin);
    //  to clean buffer ie. many usages of scanf

    // print element with index
    printf("\nArray elements with their index:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d is at index %d\n", arr[i], i);
    }

    // ask for key
    int key;
    printf("\nEnter key element to search:\n");
    scanf("%d", &key);

    // condition for key==arr[i]
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("Element %d  found at %d index\n", key, i);
            printf("Element found :)\n");
            break;
        }

        //conceptually this logic correct lekin loop ke andar likhne se every iteration this gets repeated.
        //  if(key!=arr[i]){
        //     printf("Element %d not found\n",key);
        //  }

        // yahi sahi jagah hai "not found" print karne ki
        if (i == n - 1)
        {
            printf("Element %d not found\n", key);
        }
    }

    return 0;
}
