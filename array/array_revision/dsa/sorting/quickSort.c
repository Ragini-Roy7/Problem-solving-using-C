#include <stdio.h>
// the idea is to choose a pivot ele
//divide the array into partitions, fix a lowerbound, upperbound 
int partition(int arr[], int lb,int ub) {
    //chooseing pivot_ele
    //lb=arr[0]->choosing first ele as pivot ele
    int pivot_ele= arr[lb];
    int start= lb;
    int end=ub;
    //can pass the lb,ub while calling the fn within main

    //compare the elements 
    while(arr[start]<=pivot_ele) {
        //left partition ki baat ho rhi
        start++; 
        //incrementing the start for every ele on leftSide comparison
    }
    while(arr[end]>pivot_ele) {
        end--;
    }
    if(start<end) {
        //swap 
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    // pivot ko correct position pe lana
   int temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;

    return end;   // pivot index
}
void quickSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc - 1);
        quickSort(arr, loc + 1, ub);
    }
}
int main() {
    int arr[]= {7,6,10,5,9,2,1,15,7};
    int n = sizeof(arr) / sizeof(arr[0]);
   quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


}