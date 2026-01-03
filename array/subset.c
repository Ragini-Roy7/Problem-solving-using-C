#include <stdio.h>
#include <stdbool.h>

bool isSubset(int a[], int nA, int b[], int nB)
{

    for (int i = 0; i < nB; i++)
    {
        // initial flag val false
        bool flag = false;
        for (int j = 0; j < nA; j++)
        {
            if (b[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==false) {
            return false;
        }
    }
    return true;
}
int main(){
    int a[]= {2,3,4,5,6};
    int b[]= {3,4,5}; 
    int nA= sizeof(a)/sizeof(a[0]);
    int nB= sizeof(b)/ sizeof(b[0]);

    if(isSubset(a,nA,b,nB)) {
        printf("True: b is subset of a\n");
    }else {
        printf("False: b is not subset of a\n");
    }
    return 0;
}