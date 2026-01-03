#include <stdio.h>

void add_one(int i, int n)
{
    if (i > n)   // BASE CASE
        return;

    printf("1 + %d = %d\n", i, 1 + i);

    add_one(i + 1, n);  // RECURSIVE CALL
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    add_one(0, n);   // start from 0
    return 0;
}
