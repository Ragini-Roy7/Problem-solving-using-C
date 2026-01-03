// return true if an arr appears atleast twice, return false if arr is distinct
//leetcode pro-217
//brute force
#include <stdio.h>
#include<stdbool.h>
 //main logic

bool containsDuplicate(int arr[], int n) {
     for(int i=0;i<n-1;i++) { //for picking up 1 ele at each iteration
        //if(arr[i]==arr[i+1])  
        //this works if checking adjacent ele sum 
        //but we need to check if occurances>=2 ,return-> true , return ->false
    //     for(int j=i+1;j<n;j++) {
    //    if(arr[i]==arr[j]){
    //    count++;
    // }
    //     }
    //     if(count>=2){

    //     return true;
    // }
    //  }
    //  return false;
    for(int j=i+1;j<n;j++) { //for comparison to nearby ele , isliye i+1 se start ho rha kyunki i=0  (arr[i]) toh already started h
        if(arr[i]==arr[j]) {
             return true;
        }
    }
 } 
 return false;
}
int main(){
    int n;
    printf("enter no. of ele:\n");
    scanf("%d", &n);

    int arr[n];
    printf("enter ele of your choice:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
} 

 printf("entered ele are\n");
 for(int i=0;i<n;i++) {
    //printf("%d", arr[n])
    printf("%d ", arr[i]);
 }; 
 printf("\n");

 if(containsDuplicate(arr,n)) {
    printf("duplicate found\n");
 }else {
    printf("all elements are distinct\n");
 }
 return 0;
}

