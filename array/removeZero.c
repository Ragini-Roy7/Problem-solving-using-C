// to remove zeroes from arrays
#include <stdio.h>
int main(){
    int n;
    printf("enter no. of elements:\n");
    scanf("%d",&n);

      int arr[n];
    printf("enter your elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    printf("you entered  elements\n");
    for(int i=0;i<n;i++){
        if(i==n-1) //to not put comma at n-1
        printf("%d", arr[i]);
        else {
        printf("%d, ", arr[i]);} //to put comma after each ele
    }
    printf("\n");
    //logic:- check if arr[i] curr pos == 0 , if yes print msg to pop them out
    //in c, we need dynamic memory allocation to shrink n grow the size of array
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            printf("zero found at index %d\n",i);
            // scanf("%d", &arr[i]);
            //jaise hi 0 detect hua waise hi loop lagao or waise index ke iteration ko skip kr do rest will work normal or user ko msg de do ki yeh removed ele wali array hai.
            //this logic won`t physically delete 0 from arr ,  so we need dynam mem alloc

        }
        
    }
}