#include <stdio.h>
int power(int a, int b) {
    if(b==0){
        return 1;
    }
    return a*power(a,b-1); 
}
int main(){
    int a,b;
    printf("Enter a and b\n");
    scanf("%d %d",&a,&b);

    printf("DEBUG → a=%d b=%d\n", a, b);
    
    int pow= power(a,b);
    printf("Power of base %d to the power of %d exponent becomes %d\n",a,b,pow);
    return 0;
}