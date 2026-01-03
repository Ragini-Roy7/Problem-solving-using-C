#include <stdio.h>
int main(){
    int n; 
    
    printf("enter no. of elements:\n");
    scanf("%d", &n); 

    //Input elements
    int arr[n];
     printf("enter those elements:\n");
    for(int i=0;i<n;i++){
       scanf("%d", &arr[i]);

    }

    //print elements
    // printf("Elements entered are:\n",arr[n]);
    printf("elements entered are :\t");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    // scanf("%d", &arr[n]); //storing the el
     int min=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]<min)
        //update the min
        min=arr[i];
     }
     printf("Min element is:  %d\n",min);

    return 0;
}