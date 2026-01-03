#include <stdio.h>
int main(){
    int A[]= {11,7,1,13,2,1,3,7,3};
    int B[]= {11,3,7,1};
    int sizeA=9;
    int sizeB=5;

    // for(int B=0;B<n;B++ ) {
    //     printf("%d\n",B);
    // }
    // for(int i=0;i<n;i++){
    //     if(A[i]==B[i]) {
    //         printf("%d is subset of %d\n",A,B);
    //     }
    // }
    int isSubset=1; //assume b susbet hai
    for(int i=0; i<sizeB;i++){
        int found=0;
        //to track element of B if found in array A
        for(int j=0;j<sizeA;j++){
            if(B[i]==A[i]) {
                found=1; 
                // printf("Yes %d is subset of %d\n",B,A);
                break;

            }
        }
        if(!found){
            isSubset =0;
            // printf("No %d is not subset of %d\n",B,A);
            break;
        }
    }
    if(isSubset) {
        printf("A is subset of B\n");

    }else {
        printf("A is not subset of B\n");
    }
    return 0;
}