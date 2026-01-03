// value equal to index value

//if a[]= {15,1,2,45,33}
// a[]-> a[0], a[1]==i, a[2]==i current index current iteration ke equal hai return its index or element 

#include<stdio.h>
#include<stdbool.h>
int valueEqualToIndex(int a[], int n){
    //to flag no. of matches found
    bool found=0;
    for(int i=0;i<n;i++) {
        if(a[i]==i){
             found=1;
            printf("Value %d equal to its index %d\n",i, a[i]);
           

           
         // return a[i];
        }
    }
    if(found==0)
        return -1;

    return 1;

}

int main(){
    int a[]= {15,1,2,45,33};
    valueEqualToIndex(a,5);
}