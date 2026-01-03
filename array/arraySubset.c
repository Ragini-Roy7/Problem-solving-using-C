// #include <stdio.h>
// #include <stdbool.h>
// int a[9]= {11,7,1,13,21,3,17,3};
// int b[6]= {11,3,7,1,17};

// int main(){
// //    int n=9;
//    int a[]= {11,7,1,13,21,3,17,3};
//    int b[]= {11,3,7,1,17};

//    int nA= sizeof(a)/sizeof(a[0]);
//    int nB= sizeof(b)/sizeof(b[0]);

//     //outer loop arr[b] ko chalata hai
//     for(int j=0;j<nA;j++) { //inner loop, b[]
//         for(int i=0;i<nB;i++) { //outer loop , a[]
//             if(a[i]==b[i])
//             continue;
//             {
//                 if(a[i]!=b[i]) {
//                     return false;
//                 }

//             }

//         }

//     }

//}
// within a[] each element should be iterated over n matched with b[] , all ele of b[] must
            // occur atleast once in b[]
           
                // then check no. of occurrances of b[] into a[]
                 // inside b[]
                   // inside a[]
                    
                    // count of each ele inside b[] >=1
                  
                                // if(a[i]) has count >=1 then return true else false;

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int b[] = {3, 4, 5};
    int nA = sizeof(a) / sizeof(a[0]); // i
    int nB = sizeof(b) / sizeof(b[0]); // j

    int n;
       //outer loop ke flag initially false  kiya
        bool flag= false;
      for(int i=0;i<nB;i++) { //b[] outer loop
        //for each ele in b[] ie. b[0] is comparing against each ele in a[] 
        //b[0] == a[0].....a[n] kyunki we need to check if all ele in b[] == matches b[] ele in arr a[]
        //b[1]== a[1]......a[n]

        //har b[i] ke liye reset 
        flag= false;
       
        for(int j=0;j<nA;j++){ //a[] inner loop 
          //comparing against arr b[]
          
          //abhi ek v ele nhi match hua so false
          if(b[i]==a[j]) {
            flag=true;
            break; 
            //if match is found break iteration 
            //phir next iteration m comparision karo aise hi  taki n tak jaye of b[ ] if at each iteration of b[] == a [] then subset-> return true
           
           //mujhe yeh check karna h ki kya sare b[] ke ele a[] ke andar hai agar hnn toh return true, b[] is subset of a[]
           //agar b[0] !== a[i] first iteration m hi agar b ki first index val nhi hai , means subset nhi hai return false , no need to check further 
          }
        }
        if(flag==false) {
          printf("false: b is not subset of a\n");
        }
      } 
     printf("true : b is subset of a\n")   ;                  
    }

