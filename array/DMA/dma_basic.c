// dynamic memory allocate karna
// malloc() memory allocate
// calloc() continous memory allocate + initialize with 0
// realloc() memory resize (inc/dec)
// free() free mem

#include <stdio.h>
#include <stdlib.h>

int n, newSize, i;
int main()
{

    // asking user to enter initial memory
    printf("enter initial mem size:\n");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    // n*Sizeof se size arr ka bataya or int mein typecast kr diya
    if (arr == NULL)
    {
        printf("Mem is not yet allocated\n");
        return 0;
    }

    // loop utne times chalega jitne no of elements honge

    printf("enter  elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // resize
    printf("enter new size of array:\n");
    scanf("%d", &newSize);
    // realloc-> memory resize kar rhe (Expand or shrink)
    arr = (int *)realloc(arr, newSize * sizeof(int));

    // printing  old ele
    printf("elements in old array\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    // new ele logic
    if (newSize > n)
    {
        printf("enter new elements in dynamic array\n");
        for (int i = 0; i < newSize; i++)
        {
            scanf("%d", &arr[i]);
        }
    }

    // printing new ele
    printf("new elements in dynamic  array\n");
    for (int i = 0; i < newSize; i++)
    {
        // scanf("%d", &arr[i]);
        printf("%d", arr[i]);
    }

    free(arr);
}