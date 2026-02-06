#include <stdio.h>
int main() {
    int nums[]={3,4,5,6};
    int target=7;
    int length= sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(nums[i]+nums[j]==target){
                printf("%d, %d\n", i, j);
            }
        }
    }
}