


#include <stdio.h>
#include <stdlib.h>

#define ll long long

// Comparison function for qsort
int cmp(const void* a, const void* b) {
    ll x = *(ll*)a;
    ll y = *(ll*)b;
    return (x > y) - (x < y);
}

// GCD function
ll gcd(ll a, ll b) {
    while (b) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        ll a[100005];

        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        // Sort array
        qsort(a, n, sizeof(ll), cmp);

        // Try all split points
        int found = 0;
        for (int i = 1; i < n; i++) {
            ll min_left = a[0];
            ll g = a[i];
            for (int j = i + 1; j < n; j++) {
                g = gcd(g, a[j]);
            }
            if (g == min_left) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}

