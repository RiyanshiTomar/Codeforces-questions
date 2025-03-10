#include <stdio.h>
#include <stdlib.h>

#define MAX_N 200000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void solve() {
    int n;
    scanf("%d\n", &n);
    int size = 2 * n;
    long long b[size];
    
    
    for (int i = 0; i < size; i++) {
        scanf("%lld\n", &b[i]);
    
    }
    qsort(b, size, sizeof(long long), compare);
    
    long long total_sum = 0;
    for (int i = 0; i < size; i++) {
        total_sum += b[i];
    }

    
    for (int i = 0; i < size; i++) {
        long long missing = total_sum - 2 * b[i];
        if (missing > 0) {
            printf("%lld ", missing);
            for (int j = 0; j < size; j++) {
                if (i != j) {
                    printf("%lld ", b[j]);
                }
            }
            printf("\n");
            return;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
