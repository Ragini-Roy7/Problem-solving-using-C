// #include <stdio.h>
// int main(){
//     int nums[]= {1,2,3,0,0,0};
//     int nums2[]= {2,5,6};
//     int m=3, n=3;
//     int k=0;
//     int length=m+n;
//     int res[length];

//     for(int i=0;i<m;i++ ){
//         res[k++]= nums[i];

//         for(int j=0;j<n;j++){
//             res[k++]=nums2[j];

//         }
//         //sorting
//         for(int i=0;i<length-1;i++){
//             for(int j=0;j<length-i-1;j++){
//                 if(res[j]>res[j+1]){
//                     int temp= res[j];
//                     res[j]=res[j+1];
//                     res[j+1]=temp;
//                 }
//             }
//         }
//         //copying back to original arr
//         for(int i=0;i<length;i++){
//             nums[i]=res[i];
//         }
//         //printing
//         for(int i=0;i<length;i++){
//             printf("%d, ",nums[i]);
//         }
//     }
// }
#include <stdio.h>

int main() {
    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};
    int m = 3, n = 3;

    int length = m + n;
    int res[length];
    int k = 0;

    //  nums1 valid part
    for (int i = 0; i < m; i++) {
        res[k++] = nums1[i];
    }

    // copy nums2
    for (int j = 0; j < n; j++) {
        res[k++] = nums2[j];
    }

    //Sort res 
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (res[j] > res[j + 1]) {
                int temp = res[j];
                res[j] = res[j + 1];
                res[j + 1] = temp;
            }
        }
    }

    //copy back to nums1
    for (int i = 0; i < length; i++) {
        nums1[i] = res[i];
    }

    // Print
    for (int i = 0; i < length; i++)
        printf("%d ", nums1[i]);

    return 0;
}
