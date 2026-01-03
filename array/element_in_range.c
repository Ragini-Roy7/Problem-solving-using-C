
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("enter size of array\n");
    scanf("%d", &n);

    int a[n]; //1,4,5,2,7,8,3
    printf("enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //main game
    int A;
    printf("enter starting range of elements\n");
    scanf("%d", &A); //ex-2
    int B;
    printf("enter last range of elements\n");
    scanf("%d", &B); //ex-5

    bool allElementsFound=true; //track karne ke liye 

//    bool flag=false;
    for(int x=A;x<=B;x++) { //outer loop-> range ke liye
        bool flag=false;
        for(int j=0;j<n;j++) { //inner loop ->traversal of each element
            if(a[j]==x )  {
                flag=true;
                printf("%d found is array\n",x);
                break;
            }
        }
         if (flag==false) {
        printf("%d is missing\n",x); 
          allElementsFound=false;
        }
    

    }
    // ✅ "True" printed OUTSIDE outer loop
    if(allElementsFound == true) {
        printf("True: All numbers from %d to %d are present\n", A, B);
    } else {
        printf("False: Required numbers within %d to %d range are missing\n", A, B);
    }

    return 0;
    


}