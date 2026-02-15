#include <stdio.h>
int main(){
    int n=5;
    for(int rows=0;rows<n;rows++){
        for(int cols=rows+1;cols<n;cols++){
            printf("*");
        }
        printf("\n");
    }
}