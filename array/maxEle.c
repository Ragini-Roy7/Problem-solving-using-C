#include <stdio.h>
int main()
{
    int n;
    //input no.
    printf("enter no. of elements :");
    scanf("%d", &n);
    
    //input ele
    int arr[n];
    printf("\nenter %d elements\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //print ele
    printf("Elements entered \t", arr[n]);
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
   
    int max=arr[0]; // consider arr[0] as max el
    for(int i=0;i<n;i++){
        if(arr[i]>max){
         max=arr[i]; 
         //updating max ele
        //  printf("Max element is %d\n", max);
        }
        
        // else {
        //     max>arr[i];
        //     printf("Max element is %d\n",arr[i]);
        // }
       
    }
   printf("Max element is %d\n", max);
}