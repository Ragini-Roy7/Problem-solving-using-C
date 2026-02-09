#include <stdio.h>
int main(){
    int nums[]= {1,2,3,4};
    int length= sizeof(nums)/sizeof(nums[0]);
    //op {24,12,8,6}
    int product;
    for(int i=0;i<length;i++){
            //prod can`t be zero so intialising
        product=1;
        for(int j=0;j<length;j++){
            if(i!=j) {
                product*=nums[j];
            }
            
        }
        printf("%d is the product\n",product);
    }
    
}