//return first occurrence of matched element else return -1

#include <stdio.h>
#include <stdbool.h>


int search(int a[], int n, int x) {
    //x is given element
    //a[] given array
    for(int i=0; i<n;i++ ) {
        if(x==a[i]) {
            printf("Index of first occurrence of %d element is at\n %d",x, i );
            // break;
             return i; 
        }
    }
    // else {
    //         printf("Index of first occurrence of %d element is not found\n",x);
    //         return -1;
    //     }
    printf("Index of first occurrence of %d element is not found\n",x);
    return -1;

}

int main() {
    // int a[]= {1,2,3,4,5};
    int a[]={1,3,4,5,6};
    
    search(a,5,2);
}