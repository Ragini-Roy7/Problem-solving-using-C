#include <stdio.h>
int main(){
    int grid[1][4]= {{1,3,2,2}};
    int a=2; //appears once
    int b=4; //missing
    int rows=1;
    int cols=4;
    int flag=0;
    int length=sizeof(grid)/sizeof(grid[0]);
    for(int i=0;i<rows;i++){
        for(int j=i+1;j<cols;j++){
            for(int k=j+1;k<cols;k++) {
            if(grid[i][j]==grid[i][k]){
              
                printf("%d is repeated\n",grid[i][j]);

            }
        }
    }
       
    }
              //search b
            for(int i=0;i<length;i++){
                for(int j=0;j<length;j++){
                    if(grid[i][j]==b)
                    flag=1;
                    break;
                }
              }
              if(flag==0){
                printf("%d is missing\n",b);
              }else {
                printf("%d is not missing\n",b);
              }
            }
        
        
