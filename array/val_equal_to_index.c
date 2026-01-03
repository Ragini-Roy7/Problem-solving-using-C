#include <stdio.h>

int main() {
    int i,n;
    printf("enter size of elements:\n");
    scanf("%d", &n);
    
    int a[n];
    printf("\nenter elements:\n");
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    printf("elements within array:\n");
    for(int i=0;i<n;i++) {
        printf("%d",a[i]);
    }

    //main logic 
    for(int i=0;i<n;i++){
        if(a[i]==i) {
            printf("value %d equal to its index %d\n",a[i],i);
        }
    }
    // printf("%d",a[i]);
    return 0;
} 