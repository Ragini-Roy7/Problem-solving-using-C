#include <stdio.h>
int n;
int main()
{
    printf("enter size of array\n");
    scanf("%d", &n);

    int a[n];
    printf("enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }

    int key;
    printf("enter key\n");
    scanf("%d", &key);
    if (key >0 && key < n)
    {  // key=i;
            key = a[key];
        }
        printf("%d %d", key,a[key]);
        return 0;
    }

