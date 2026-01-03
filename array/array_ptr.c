// ptr are used to store addresss of a var
#include <stdio.h>
//in c, array passed inside fns are decayed as ptrs
void printArr(int *ptr, int n) {
    for(int i=0;i<n;i++) {
        if(n!=n-1)
        printf("%d " , ptr[i]);
    }
}
int main(){
    int arr[8] ={10,22,44,55,43,56,78,98};

    printArr(arr, 8);
    return 0;
   
}