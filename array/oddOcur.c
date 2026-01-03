#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of elements\n");
    scanf("%d", &n);
     
    int a[n];
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

   printf("\nElements within array\n");
   for(int i=0;i<n;i++){
    printf("%d", a[i]);
   }
printf("\n");
//    int i,count=0; //count default set to 0
// //    int isAlreadyVisited[n]; 
//    for(int i=0;i<n;i++)
// //    int isAlreadyVisited[n];
// {
//   isALreadyVisited[i]=0;
// } 


//    for(int i=0;i<n;i++){  //for iteration outer loop
//     for(int j=0;j<n;j++){ //for comparison of each number, inner loop
//        count=count++;
//        isAlreadyVisited[i]= 1;
      
//     }

//    }
int isAlreadyVisited[n];
for(int i=0;i<n;i++){
    isAlreadyVisited[i]=0;
}

int oddCount=0;
   for(int i=0;i<n;i++){
    if(a[i]%2 !=0){
        oddCount++;
    }
   }
   printf("%d elements are odd\n",oddCount);
   return 0;
}

