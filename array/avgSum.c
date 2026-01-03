#include <stdio.h>

int main(){
    int n=10;
    int arr[10];
    float avg; 
    float sum;

    for(int i=0;i<10;i++){
        printf("Enter marks obtained : %d\n",i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<10;i++){
        sum+= arr[i];
    }
    avg= sum/10.0;
    printf("Average is %.2f\n", avg);
}