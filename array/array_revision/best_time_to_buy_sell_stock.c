#include <stdio.h>

int main() {
    int prices[] = {10,1,5,6,7,1};
    int n = sizeof(prices)/sizeof(prices[0]);

    int min_price = prices[0];
    int max_profit = 0;

    for(int i = 0; i < n; i++) {
        if(prices[i] < min_price)
            min_price = prices[i];
        else if(prices[i] - min_price > max_profit)
            max_profit = prices[i] - min_price;
    }

    printf("Max profit = %d\n", max_profit);
    return 0;
}
