#include <stdio.h>
int main(){
    int n=5;
    int a[5]= {1,2,3,4,5};
    int key=4;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("%d element found at %d index\n",key,i);
        }

    }
    return 0;
    
}