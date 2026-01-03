// #include <stdio.h>
// int main() {
//     int n=7;
//     int a[7]= {1,4,5,2,7,8,3};
//     int A=2;
//     int B=5;
    
//     int found=0, allFound=0;
//     // int allElementVisited[n];

//     for(int x=A;x<B;x++){
//         found=0;
//     }
//     for(int i=0;i<n;i++){
        
//             // allElementVisited[i] =1;
//             if(a[i]==a[x]) {
//                break;
//             }
            
//         }
//        if (found == 0) {
//             allFound = 0;
//             break; 
//     }

// }
//  if (allFound)
//         printf("All elements from %d to %d are present\n", A, B);
//     else
//         printf("Some elements from %d to %d are missing\n", A, B);

//     return 0;

// }

//     for(int i=0;i<n;i++){
//         if(allElementVisited [i]=1){
//             continue;
            
//         }
//     }
// }
  #include <stdio.h>

int main() {
    int a[] = {3, 1, 4, 2, 6};
    int n = 5;
    int A = 1, B = 4;

    int found, allFound = 1;

    for (int x = A; x <= B; x++) {   // value loop (A to B)
        found = 0;

        for (int i = 0; i < n; i++) { // array scan
            if (a[i] == x) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            allFound = 0;
            break;
        }
    }

    if (allFound)
        printf("All elements from %d to %d are present\n", A, B);
    else
        printf("Some elements from %d to %d are missing\n", A, B);

    return 0;
}
