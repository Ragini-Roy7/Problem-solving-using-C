#include <stdio.h>
int main(){
    int n=7;
    int a[7]= {1,2,8,10,11,12,19};
    int target=0;
   
    int lessorEqual=0;
    int greaterorEqual=0;
    for(int i=0;i<n;i++){
        if(a[i]<=target) {
            lessorEqual++;
        }   
        if(a[i]>target){
            greaterorEqual++;
        }
    }
     printf("%d elements are smaller or equal to %d target value\n",lessorEqual,target);
     printf("%d elements are greater than %d value\n ",greaterorEqual,target);
}