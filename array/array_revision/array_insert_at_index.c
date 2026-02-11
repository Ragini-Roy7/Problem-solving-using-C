#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int index = 5;
    int val = 90;
    int length = sizeof(arr) / sizeof(arr[0]);

    arr[index] = val;

    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
        {
            printf("%d", arr[i]);
        }

        else
        {

            printf("%d,", arr[i]);
        }
    }
}