#include <stdio.h>
int main() {
    int nums[] = {4,4,4,5,5,6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    int freq[10];
    int visited[10] = {0};

    // Frequency count
    for(int i = 0; i < n; i++) {
        //when element within ith itr found,marked it n skip it
        if(visited[i]) continue;

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                count++;
                visited[j] = 1;
            }
        }
        freq[i] = count;
    }

    // Sort by frequency in descending order
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(freq[i] < freq[j]) {
                // Agar left wala element chhota hai right wale se To dono ko swap kar do
                int temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;

                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    //print top k elements
    for(int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
