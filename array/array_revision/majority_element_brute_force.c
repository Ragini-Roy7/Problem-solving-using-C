#include <stdio.h>
int main(){
    int nums[]= {2,2,1,1,1,2,2,2};
    int length= sizeof(nums)/sizeof(nums[0]);
    

    for(int i=0;i<length;i++){
        int count=0;
        for(int j=0;j<length;j++){
            if(nums[i]==nums[j]){
                count++;
                
            }
        }
        // int majority= count;
        // if(majority>count){
        //     printf("Majority Element is: %d",majority);
        // }
        //we have now updated val of count so this won`t work
        //now both have freq count
            if(count>length/2)
            printf("Majoriy Element is %d\n",nums[i]);
            return nums[i];
      
    }
    return -1;
    
}