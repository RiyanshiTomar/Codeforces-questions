#include <stdio.h>
#include <string.h>

int countOnes(char s[], int n) {
    int count1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count1++;
        }
    }
    int totalOnes = count1 * n + (n - 2 * count1);
    return totalOnes;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        char s[15]; 

        scanf("%d", &n);
        scanf("%s", s);

        int result = countOnes(s, n);
        printf("%d\n", result);
    }

    return 0;
}
