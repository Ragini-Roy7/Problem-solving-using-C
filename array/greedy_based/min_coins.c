#include <stdio.h>
int arr[] = {1, 2, 5, 10, 20, 50, 100};
// non -canonical system
int n = sizeof(arr) / sizeof(arr[0]);
// int curr_sum=0;
// int tot_sum=0;
// int minCoins=1;
int count=0;
int target_currency = 93;
// int coin_steps=arr[0];
// edge case
// if coins are less than given target
int main()
{
    // for(int i=0;i<n;i++){
    // sum+=arr[i];
    // //total_sum
    // if(sum==target_currency){
    //     //reached end
    // }
    for (int i = n-1; i >0; i--)
    {
        // choose max coin
    //     int max_coin = arr[n];

    //     if (max_coin < target_currency)
    //         // if max coin is largest then target curr
    //         // this is not the result
    //         return -1;

    //     // now update the max_coin
    //     // reset max coin again
    //     max_coin = arr[0];
    //     if (max_coin >= target_currency)
    //     {
    //         // can give min no of coins neeeded
    //         int min_coins = arr[i] + i;
    //         //max no of coins taken
    //         //how many no of min no of coins movement took place for target currency
    //     }
    // }
    while(target_currency>=arr[i]){
        target_currency-=arr[i];
        //subtract remaining currency with coins

        //we have already consumed no of certain steps so count inc
        count++;
        printf("%4d |%d\n",arr[i],target_currency);
    }
    }
    printf("min no of coins needed",count);
}
