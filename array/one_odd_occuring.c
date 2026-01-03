
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter size of array:\n");
//     scanf("%d", &n);

//     int a[n];
//     printf("enter elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("\narray elements are:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d , ", a[i]);
//     }
//     printf("\n");
//     // main logic
//     int  i, j, visited[n];

    // for (int i = 0; i < n; i++)
    // {
    //     if (visited[i] == 1)
    //     {
    //         continue; 
            // skip elements if already visited
        // }
        // count = 0;

        // for (int j = 0; j < n; j++) 
        // { // freq count ke liye
        //     if (a[i] == a[j]);
        //     count++;
        //     visited[j] = 1;
        // }
        //    if(count %2!=0) {
        //     printf(" %d odd elements occuring\n",a[i],count);
        //    }
        // for (int j = 0; j < n; j++)
        // {
        //     if (count % 2 != 0)
        //     {
        //         printf("\n%d element has  %d odd time occurence\n", a[i], count);
        //     }
        // }

//         for(int i=0;i<n;i++)
//         visited[i]=0;  //to avoid garbage value

//         int count=0;
//         for(int i=0;i<n;i++) { //outer loop 
//             if(visited[i]==1)
//             continue; //skip agar visited elements hai toh
//         }

//         for(int j=0;j<n;j++) {
//             if(a[i]==a[j]) {
//                 visited[j]=1;
//             }
//         }
         
//         for(int j=0;j<n;j++)
//          if(count %2!=0){
//                 printf("\n%d element occured %d times\n",a[i],count);
//             }
// }

#include <stdio.h>

int main() {
    int n,i,count=0;
    int maxOddCount=0, answerElement=0;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int visited[n];            // visited array
    for (int i = 0; i < n; i++)
     visited[i] = 0; // INITIALIZE to 0 !!

    // --- Main logic according to your steps ---
    
    for (int i = 0; i < n; i++) {             // 1) i = 0 to n-1
        if (visited[i] == 1) continue;       // 2) if already processed -> skip

        int count = 0;                       // 3) count = 0
        for (int j = 0; j < n; j++) {        // 4) j = 0 to n-1
            if (a[i] == a[j]) {              // 5) if equal -> count++
                count++;
                visited[j] = 1;              // mark matched index visited
            }
        } // inner loop khatam
     
        if (count % 2 != 0) {                // 7) after inner loop: if count odd -> print
            // if(count[j])
            // printf("%d occurs %d times (odd)\n", a[i], count);
            // If you only want the single odd-occurring element and then stop, uncomment next line:
            // break;

                  //max odd count return karne ke liye
                  if(count>maxOddCount){
                    maxOddCount=count;
                    answerElement=a[i];
                  }
      
    
  
        }
    
    }
         printf("\n%d element has %d times odd occurrence\n",a[i],maxOddCount );
       
    

    return 0;
}
