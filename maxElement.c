#include <stdio.h>
int main(){
    int n; 
 
    
    printf("enter n no. of elememts\n");
    scanf("%d", &n);

       int arr[n]; 

       printf("enter %d elements:\n",n);
       for(int i=0;i<n;i++){
       scanf("%d", &arr[i]);
    }

    //condition for max element
    int max=arr[0];

for(int i=0;i<n;i++){
    if(arr[i]>arr[max]){
        printf("max element is :");
        scanf("%d", &arr[max]);
    }
    
}

}