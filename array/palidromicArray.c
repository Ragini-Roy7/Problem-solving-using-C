// #include <stdio.h>
// #include <stdbool.h>

// bool isPalindrome(int a){
//     int original=a;
//     int last = a%10;
//     while(a>0){
//         original= a%10;
//         if(original!= last) {
//            return false;
//         }
//          a=a/10;
//     }
//    return last==original;
// }
// int main(){
//     // isPalindrome(111);
//     int a[]= {111,222,333,444,555,666};
//     int size=6;
//     for(int i=0;i<size;i++) {
//         if(!isPalindrome(a[i]))
//         printf("%d Array is not palindromic\n", a[size]);
//         return 0; //agar palindrome na ho toh 0
//     }
//     printf(" %d Array is palindromic\n", a[size]);
//     return 1;
// }

#include <stdio.h>
#include <stdbool.h>

// if a number is palindrome
bool isPalindrome(int a) {
int original = a;
int rev = 0;
while(a > 0) {
    rev = rev * 10 + a % 10;  // build reversed number
    a = a / 10;               // remove last digit
}

return rev == original;       // compare original and reversed

}

int main() {
int a[] = {111, 222, 333, 444, 555, 666};
int size = sizeof(a)/sizeof(a[0]); // automatically get array size
for(int i = 0; i < size; i++) {
    if(!isPalindrome(a[i])) {
        printf("%d is NOT palindromic\n", a[i]);
        return 0; // stop if any element is not palindrome
    }
}

printf("All array elements are palindromic\n");
return 1;

}
