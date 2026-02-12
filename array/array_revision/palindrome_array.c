#include <stdio.h>

int main() {
    int arr[] = {1,2,3,2,1};
    int length = sizeof(arr)/sizeof(arr[0]);

    int i = 0, j = length - 1;
    int isPalindrome = 1;

    while(i < j) {
        if(arr[i] != arr[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

   
    
