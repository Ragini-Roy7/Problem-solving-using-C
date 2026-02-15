#include <stdio.h>
int main(){
    int n=5;
    // for(int rows=1;rows<=n;rows++){
    //     for(int cols=1;cols<=rows;cols++){
    //         if(cols<=rows){
    //             printf("*");
    //         }else {
    //             printf(" ");
    //         }
    //        printf("\n");
    //     }
    // }
    for(int rows=1;rows<=n;rows++){
        for(int cols=1;cols<=n;cols++){
          if(rows+cols<=n+1){
            printf("*");
          }
          printf(" ");
        }
        printf("\n");
    }
}