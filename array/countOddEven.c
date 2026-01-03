#include <stdio.h>
int main()
{
    int i,n = 6;
    int a[] = {11, 12, 13, 14, 15, 16};

    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("even elements occured %d times\n",even_count);
    printf("odd elements occured %d times\n",odd_count);

}
