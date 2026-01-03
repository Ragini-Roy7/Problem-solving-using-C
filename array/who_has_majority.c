// #include <stdio.h>
// int main() {
//     int arr[]= {1,1,2,2,3,3,4,4,4,4,5};
//     int x=2,n=11;

//      int i,count=0;

//      int visitedElements=0;
    
//  for(int i=0;i<n;i++) {
//     for(int j=0;j<n;j++) {
//         if(arr[i]==arr[j]) {
//             visitedElements++;

//         }
//     }
//  }


//     for(int i=0;i<n;i++) { //no. of iterations
//         for(int j=0;j<n;j++) { //no. of elements 
//             // count++;
//             //check no of count of each element
//            count++;
            
//         }
        
//     }
    
   
// // printf("%d occurs %d times\n",arr[i],count) ;
// }
#include <stdio.h>
int main() {
    int n=7;
    int arr[]={10,22,22,33,33,33,10};
    

    for(int i=0;i<n;i++) {
        int count=0;
        //skip karne jo already counted ele hai 
        int visited_Elements=0;
        for(int k=0;k<n;k++){
            if(arr[k]==arr[i]) {
                visited_Elements=1;
                break;
            }

        }
        
    if(visited_Elements) continue;

    //count occurances logic
    //   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            if(arr[i]==arr[j]) {
              count++;
            }
        }
        printf("%d elements occured %d times\n", arr[i],count);
    }
    }
    
