// binary
#include <stdio.h>
int main()
{
    int key = 20;
    int n = 6;
    int arr[6] = {5, 10, 15, 20, 50, 56};
    int l = 0;
    int r = n - 1; // right_most arr
    // left_most arr
    int mid;
    // mid_element (if n=even , n=l+r/2 if n=odd, n=l+r/2+1)

    // r= mid+1;
    // to move towards rightmost arr if  case 1. key>mid
    // l=mid-1;
    // to move towards leftmost arr if case 2.  key<mid
    // case 3. mid==key element

    // for (int i = 0; i < n; i++)
    // {
    //     if (key > arr[mid])
    //     {
    //         // key=50 , mid=3rd idx , arr[3]=15, 50>15, yes-> move towards right_most arr

    //         // to move towards right_most arr, take curr itr comapre with key_ele

    //         // arr[i] == key;
    //         // {
    //         //     printf("%d element found", key);
    //         // }
    //         l=mid+1;
    //     }
    // }
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            printf("%d element found at index %d", key, mid);
            return 0;
        }

        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    printf("element not found");
    return 0;
}
