#include <stdio.h>
int main()
{
    int n = 5;
    int key = 100;
    int arr[5] = {5, 10, 20, 30, 40};
  
    //linear search
    for(int i=0;i<n;i++) {
        if(key==arr[i]){
            printf("%d element found", key);
        }
    
     else {
            printf("%d element not found",key);
        }
    return 0;

}

}