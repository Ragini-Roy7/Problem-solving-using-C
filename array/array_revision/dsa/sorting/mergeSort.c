#include <stdio.h>
// idea of merge sort -> divide the array till only one elements remain left
// 1.we divide the array into halves ie. leftSubArray and rightSubArray 
// 2.until entire leftSubArray and rightSubArray gets exhausted -> continue splitting 
// 3.then we have only one element , compare all the elements using nested loops and create another arr and copy  all the
// elements after comparison of each element from leftSubArray and rightSubArray
void  merge(int a[] , int lb, int mid, int ub){
    int i=lb;
    int j=mid+1;
   int k=lb; //to iterate over after splitting all the elements
   int b[50];
   while(i<=mid && j<=ub){
    //compare each element 
    // if element from rightSubarray is greater than copy the element from leftsubarray into k
    if(a[i]<=a[j]) {
        //copying the elements from left into new arr[k]
        b[k]= a[i];
        //move for further iteration
           i++;
    } else {
        //else right elements are greater so copy it into arr[k] from j 
        b[k]= a[j];
        j++;
    }
    //move to next place within new arr
    k++;

   }
   //there might be a possibility that elements from leftsubarray remains left because the given condition may make rightSubarray exhuasted 
   while(i<=mid) {
    b[k]=a[i];
    i++;
    k++;
   }
   //copy the remaining elements form rightSubarray 
   while(j<=ub){
    b[k]=a[j];
    j++;
    k++;
   }
   //copying back to original arr for printing the sorted arr
   for(i=lb;i<=ub;i++) {
    a[i]=b[i];
   } 
}
   void mergeSort(int a[], int lb,int ub) {
    if(lb<ub) {
        int mid= (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
   }
   int main() {
    int a[]= {15,5,24,8,1,3,16,10,20};
    int n=9;
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++) {
        printf("%d", a[i]);
        return 0;
}
}