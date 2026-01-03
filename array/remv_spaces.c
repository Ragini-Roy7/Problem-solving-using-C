#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of ele");
    scanf("%d", &n);

    int arr[n];
    printf("enter those ele:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("you have entered ele:\n");
    for (int i = 0; i < n; i++)
    { 
        printf("%d",arr[i]);
    }
}