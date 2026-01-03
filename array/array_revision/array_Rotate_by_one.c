#include <stdio.h>
int main(){
    int n=5;
    int a[]= {1,2,3,4,5};
    int d=5;

    for(int i=0;i<n;i++){
        if(a[i]==d){
            printf("%d",d);
        }
        //break;
    }
    for(int i=0;i<n-1;i++){
       
      // printf("%d" ,a[i]);
      printf(", %d", a[i]);
        
        
    }
}