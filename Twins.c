#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
int main(){
    int n;
    scanf("%d\n", &n);
    int coins[n], total_sum = 0;

    // Read coins and calculate total sum
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
        total_sum += coins[i];
    }

    // Sort the coins in descending order
    qsort(coins, n, sizeof(int), compare);

    int taken_sum = 0, count = 0;

    // Take coins until taken_sum > remaining sum
    for (int i = 0; i < n; i++) {
        taken_sum += coins[i];
        count++;
        if (taken_sum > total_sum - taken_sum) {
            break;
        }
    }

    // Output the minimum number of coins needed
    printf("%d\n", count);
   
    return 0;

    }
    