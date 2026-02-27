// #include <stdio.h>
// int main()
// {
//     // implement switch case searching, average,reverse, merging

//     int choice;
//     printf("Enter your choice:(1.Searching 2. Average 3. Reverse 4. Meging)");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case 1:
//         // ask user to input array elements
//         int n;
//         int arr[n];
//         printf("enter no of elements\n");
//         scanf("%d", &n);
//         // elements within array
//         printf("enter elements in array\n");
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &n);
//         }
//         // print array
//         printf("entered elements within array are:\n");
//         for (int i = 0; i < n; i++)
//         {
//             printf(arr[i]);
//         }
//         // enter key
//         int key;
//         printf("Enter key element to search in array\n");
//         scanf("%d", &key);
//         // searching
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == key)
//             {
//                 printf("Element %d found at %d index\n", arr[i], i);
//             }
//             else
//             {
//                 printf("Element not found\n");
//             }
//         }
//         break;
//     case 2:
//         int arr[5] = {10, 20, 30, 40, 50};
//         int sum = 0;
//         int average = 0;
//         // calc average
//         for (int i = 0; i < 5; i++)
//         {
//             // calc sum of each element
//             sum += arr[i];
//             printf("sum of  %d is:", sum);
//             // avg
//             average = sum / 5;
//             printf("Average of %d is :", average);
//         }
//         break;
//     case 3:
//     //Reverse
//     int size=6;
//     int arr[6]= {10,20,30,40,50,60};
   
//     int temp;
//     for(int i=0;i<size;i++) {
//         temp= arr[i];
//         arr[i]=arr[size-1-i];
//         arr[size-1-i]=temp;
     
//     }
//     //print the reverse 

//     break;

//     case 4:
//     //merging

//     int arr_1[]= {1,2,3};
//     int len_arr1= sizeof(arr_1)/sizeof(arr_1[0]);
//     int arr_2[]= {3,4,5};
//     int len_arr2= sizeof(arr_2)/sizeof(arr_2[0]);
//     int c[2*len_arr2];
//     int k=0;
//     //size declared 
//     for(int i=0;i<c;i++) {
//         c[k++]=arr_1[i];
//         // c[k++]=arr_2[i];
//     }
//     for(int j=0;j<c;j++) {
//         c[k++]=arr_2[j];

//     }
//     //print
//     for(int i=k;i<c;k++) {
//         printf("%d",c[i][j]);
//     }
//     break;
    
//     }
// }