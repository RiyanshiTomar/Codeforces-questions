#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int a[n+1];
    if(n ==2 && k == 1){
        printf("2 1\n");
        return;
    }
    for (int i = 0; i <= n+1; i++) {
        a[i] = (i%n) + 1; // Circular shifting
    }
    a[n] = 2;
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}