


#include <stdio.h>
#include <stdlib.h>

#define int long long

void solve() {
    int n, k;
    long long x;
    scanf("%lld %lld %lld", &n, &k, &x);
    
    int a[n];
    long long total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        total_sum += a[i];
    }

    // Maximum length of b
    long long max_b_size = n * k;
    long long count = 0;

    // If the total sum of k full cycles is less than x, it's impossible
    if (total_sum * k < x) {
        printf("0\n");
        return;
    }

    // Compute prefix sums for two cycles to simulate wraparound
    int extended_n = n * (k > 1 ? 2 : 1);
    long long prefix_sums[extended_n + 1];
    prefix_sums[0] = 0;

    for (int i = 0; i < extended_n; i++) {
        prefix_sums[i + 1] = prefix_sums[i] + a[i % n];
    }

    // Sliding window to count valid starting positions
    for (int l = 0, r = 0; l < max_b_size; l++) {
        while (r < extended_n && prefix_sums[r + 1] - prefix_sums[l] < x) {
            r++;
        }
        if (prefix_sums[r + 1] - prefix_sums[l] >= x) {
            count += (max_b_size - r);
        }
    }

    printf("%lld\n", count);
}

int main() {
    int t;
    scanf("%lld", &t);
    
    while (t--) {
        solve();
    }
    
    return 0;
}
