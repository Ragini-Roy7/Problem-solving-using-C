#include <stdio.h>

int main()
{
    int choice;
    printf("Enter your choice:\n");
    printf("1. Searching\n2. Average\n3. Reverse\n4. Merging\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        int n;
        printf("Enter number of elements: ");
        scanf("%d", &n);

        int arr[n];

        printf("Enter elements:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("Entered elements are:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        int key, found = 0;
        printf("\nEnter key to search: ");
        scanf("%d", &key);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                printf("Element found at index %d\n", i);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("Element not found\n");
        }

        break;
    }

    case 2:
    {
        int arr[5] = {10, 20, 30, 40, 50};
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }

        float average = sum / 5.0;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
        break;
    }

    case 3:
    {
        int arr[6] = {10, 20, 30, 40, 50, 60};
        int size = 6;

        for (int i = 0; i < size / 2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = temp;
        }

        printf("Reversed array:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        break;
    }

    case 4:
    {
        int arr1[] = {1, 2, 3};
        int arr2[] = {4, 5, 6};

        int len1 = sizeof(arr1) / sizeof(arr1[0]);
        int len2 = sizeof(arr2) / sizeof(arr2[0]);

        int merged[len1 + len2];

        for (int i = 0; i < len1; i++)
        {
            merged[i] = arr1[i];
        }

        for (int i = 0; i < len2; i++)
        {
            merged[len1 + i] = arr2[i];
        }

        printf("Merged array:\n");
        for (int i = 0; i < len1 + len2; i++)
        {
            printf("%d ", merged[i]);
        }

        break;
    }

    default:
        printf("Invalid choice\n");
    }

    return 0;
}