#include <stdio.h>
#include <string.h>

#define MAXN 200005

int freq[MAXN];

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k, a[MAXN];
        scanf("%d %d", &n, &k);
        
        // Reset frequency array
        memset(freq, 0, sizeof(int) * (n + 5));

        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
            if (a[i] < n + 2) {
                freq[a[i]]++;
            }
        }

        int x = 0;
        while (1) {
            if (freq[x] < k) break;
            x++;
        }

        printf("%d\n", x);
    }

    return 0;
}
