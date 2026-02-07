//optimized 
#include <stdio.h>
int main(){
    int nums[]= {-1,0,1,2,-1,-4};
    int sum=0;
    int n=sizeof(nums)/sizeof(nums[0]);
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
    for(int i=0;i<3;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        //agar i ki element jo current iteration par hai woh apne pehle elment ke == hai toh duplicate hai kyunki us case mein triplet gen nhi ho sakta ,duplicacy not allowed
        int left= i+1;
        int right=n-1; 
        while(left<right){
             sum=nums[i]+nums[left]+nums[right];
             if(sum==0) {
                //creating triplet
                printf("[%d, %d,%d]\n", nums[i],nums[left],nums[right]);
                //jab tak left element is same inc left element by +1
                while(left <right && nums[left]==nums[left+1])
                left++;
                //jab tka right element is same dec right element by -1
                while(left<right && nums[right]==nums[right-1])
                right--;

                left--;
                right--;
             }
              else if(sum<0)
              left++;
              else right--;
        }
    }
}