#include <stdio.h>

int main()
{
    int n;

    printf("enter no. of elements\n ");
    scanf("%d", &n);

    int a[n];

    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // printing the elements
    printf("array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");

    // main logic to replace 0->5
    printf("\nArray after replacing 5 with 0:\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5)
        {
            a[i] = 0;
            printf("%d", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
    printf("\n");
}