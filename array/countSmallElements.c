// count of smaller elements -GFG
// a[]= {10,1,2,8,4,5}  x=9 ->1,2,8,4,5 >= 9 so count of these elements-> 9 

#include <stdio.h>

int countSmallerElements(int a[],int x,int n){
    int count=0;
    for(int i=0;i<n;i++) {
        if(a[i]<=x) {
          count++;
            // printf("Elements %d smaller than %d are\n", count,x);
        }
    }
    return count;

}
int main() {
    int a[]= {10,1,2,8,4,5};
    int x=9;
    int n= sizeof(a)/sizeof(a[0]);
    int res= countSmallerElements(a, x, n);
    printf("No. of elements <= %d is %d\n", x,res);
    return 0;
    
}