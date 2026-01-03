// to calc average marks of array
// #include <stdio.h>
// int main() {
//     int avg, sum=0;
//     //marks arr
//     int marks[10];

//     for(int i=0;i<=9;i++){
//         printf("Enter marks obtained");
//         scanf("%d",&marks[i]);
//         //marks input 
//     }
//     //calc sum
//     for(int i=0;i<=9;i++){
//         sum=sum+marks[i];  //adding  total marks 
        
//     }
//     avg= sum/10;
//     printf("Average calculate is: %d\n", avg); 
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int sum = 0;
//     int marks[10];
//     float avg;

//     // Input  marks
//     for(int i = 0; i < 10; i++){
//         printf("Enter %d marks obtained: \n", i+1);
//          scanf("%d", &marks[i]);
//     }

//     // Calculate sum
//     for(int i = 0; i < 10; i++){
//         sum += marks[i];
//     }

//     // Calculate average
//     avg = sum / 10.0;

//     printf("Average obtained = %.2f\n", avg);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int sum = 0;
//     int marks[10];
//     float avg;

//     // Input marks
//     for (int i = 0; i < 10; i++) {
//         printf("Enter marks %d: ", i + 1);
//         scanf("%d", &marks[i]);
//     }

//     // Calculate sum
//     for (int i = 0; i < 10; i++) {
//         sum += marks[i];
//     }

//     // Calculate average
//     avg = sum / 10.0;

//     printf("Average obtained = %.2f\n", avg);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int sum=0;
//     int marks[10];
//     float avg; //10 elements

//     for(int i=1;i<10;i++){
//         printf("Enter marks: %d\n", marks);
//         scanf("%d", &marks[i]);
//     }

//     for(int i=1;i<10;i++){
//         sum+= marks[i];
//     }
//     avg=sum/10.0;

//     printf("Average marks :=%.2f\n",avg);

// }

#include <stdio.h>

int main() {
    int sum = 0;
    int marks[10];
    float avg;

    // Input marks
    for (int i = 0; i < 10; i++) {
        printf("Enter marks %d: ", i + 1);
        scanf("%d", &marks[i]);  
    }

    // Calculating sum
    for (int i = 0; i < 10; i++) {
        sum += marks[i];
    }

    // Calculating average
    avg = sum / 10.0;

    printf("Average obtained = %.2f\n", avg);

    return 0;
}
