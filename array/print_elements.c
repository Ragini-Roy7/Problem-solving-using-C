#include <stdio.h>

void printElements(int a[], int n) {
    // printf("enter no. of elements\n");
    // scanf("%d", &n);
   //can`t declare array inside function
    printf("enter elements \n");

    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    //print elements


    printf("entered elements are : ");
    for(int i=0;i<n;i++) {
        // printf("%d\t",  a[i]);
        printf("%-5d", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("enter no. of elements:\n ");
    scanf("%d", &n);
    int a[n];
    //variable length array (VLA)
    printElements(a,n);
}