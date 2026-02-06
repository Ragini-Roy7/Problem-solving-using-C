#include <stdio.h>
int main() {
    int nums[]= {1,2,3,4,5};
    int length = sizeof(nums) / sizeof(nums[0]);
    for(int i=0;i<length;i++) {
        for(int j=i+1;j<length-1;j++) {
            if(nums[i]==nums[j]) {
                printf("True\n");
            }
        }
         return 0;
    }
   
}