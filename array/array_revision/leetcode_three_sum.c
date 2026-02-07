#include <stdio.h>
int nums[]={-1,0,1,2,-1,-4};
int n=sizeof(nums)/sizeof(nums[0]);
int main(){
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]) {
                int temp= nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(int i =0;i<n-2;i++) {
        if(i>0 && nums[i]==nums[i-1]) continue;//skipping duplicate i
        for(int j=i+1;j<n-1;j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;//duplicate j
            for(int k=j+1;k<n;k++) {
                // if(k>0 && nums[k]== nums[k-1])
                // continue; //duplicate k
                if(nums[i]+nums[j]+nums[k]==0) {
                    //create triplet pair
            printf("[%d, %d, %d]\n", nums[i],nums[j],nums[k]);

                }
            }
        }
    }
}
