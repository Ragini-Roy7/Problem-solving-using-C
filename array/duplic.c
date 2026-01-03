#include<stdio.h>
#include <stdbool.h>


bool containsDuplicate(int a[], int n){
    // int count;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) { //i+1 isliye kyunki outer loop already a[i] -> means kisi na kisi element par hai isliye i+1 se start karenge
            if(a[i]==a[j]) {
                // count= count++; 
                    return true; //duplicate found
                }

            }
        }
    
    return false;
}
int main() {
    int i,j;
    int a[]= {1,2,3,2,1};
    int n= sizeof(a)/sizeof(a[0]);
    
    if(containsDuplicate(a, n)) {
        printf("Duplicate:Element %d found at index %d\n",a[i], i,j );
    }else {
        printf("Every element is distinct\n");
    }
    return 0;

}