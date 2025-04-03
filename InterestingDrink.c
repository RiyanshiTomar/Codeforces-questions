#include <stdio.h>
int main() {
    long long numberofShops;
    scanf("%lld", &numberofShops);
    long long x[numberofShops];
    
    // Read shop prices
    for(long long i = 0; i < numberofShops; i++) {
        scanf("%lld", &x[i]);
    }
    
    long long q;
    scanf("%lld", &q);
    long long m[q];
    
    // Read queries
    for(long long i = 0; i < q; i++) {
        scanf("%lld", &m[i]);
    }
    
    // Process each query
    for(long long i = 0; i < q; i++) {
        int count = 0;
        // Count shops where price is less than or equal to money
        for(long long j = 0; j < numberofShops; j++) {
            if(x[j] <= m[i]) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}