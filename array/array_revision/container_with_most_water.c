#include <stdio.h>
int main(){
    int height[]= {1,8,6,2,5,4,8,3,7};
    int max_water=0;
    int width=0;
    int ht=0; //actual height to calculate 
    int n= sizeof(height)/sizeof (height[0]);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            //calculate its width 
              int width = j - i;

        int min_ht;
        if(height[i] < height[j])
            min_ht = height[i];
        else
            min_ht = height[j];
       

         //calculate its area to find how much water it can store 
         int area= min_ht*width;
         if(area> max_water)
         max_water=area;

        }
    }
    printf("%d",max_water);
}
