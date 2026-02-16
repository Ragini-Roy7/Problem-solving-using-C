#include <stdio.h>
int main(){
    int n=5;
    for(int rows=1;rows<=n;rows++){
        for(int cols=1;cols<=n;cols++){
            if(rows+cols>n+1){
                printf("*");
            }else {
                printf(" ");
            }
            printf("\n");
        }
    }
}