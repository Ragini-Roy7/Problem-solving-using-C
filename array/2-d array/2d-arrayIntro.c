#include <stdio.h>
int main(){
    int rows=0, cols=0;
    int i,j;;
    printf("enter no. of rows and columns\n");
    scanf("%d %d", &rows, &cols);
    
     int a[rows][cols];
    printf("enter elements\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }

    //printing elements
    printf("\n2-d array elements include\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            
               printf("%d, ", a[i][j]);
            
           
        }
    }
    printf("\n");
}