#include <stdio.h>
int a[]= {10,1,2,8,4,5};
int x=9;

int count=0;
int main(){
    for(int i=0;i<=5;i++){
        //int count=0;
        if(a[i]<x){
            count=count+1;
            // printf("elements smaller than :%d\n",count,x);
        }
    }
     printf("elements smaller than :%d\n",count,x);
}