//Boyer-Moore Voting algo
#include <stdio.h>
int main(){
    int nums[]= {2,2,1,1,1,2,2};
    //we assume majority element always exist in array
    //if nums[i]> length/2
    int length= sizeof(nums)/sizeof(nums[0]);
    int count=0, candidate=0;

    for(int i=0;i<length;i++){
        if(count==0)
        //suppossed jo nums[i] par hai woh candidate key hai whose val is in majority
        candidate= nums[i];

        if(nums[i]==candidate)
        count++;
        else count--;
        }
        printf("Majority element is %d",candidate);
        return candidate;
    }
    
