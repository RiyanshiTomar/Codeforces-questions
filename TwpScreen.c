#include <stdio.h>
#include <string.h>

int min_seconds(char s[], char t[]) {
    int m = strlen(s), n = strlen(t);
    int lcs_len = 0; // Length of the longest common suffix
    
    // Finding the longest common suffix of s and t
    for (int i = 1; i <= (m < n ? m : n); ++i) {
        if (s[m - i] == t[n - i]) {
            lcs_len = i;
        } else {
            break;
        }
    }
    
    return (m - lcs_len) + (n - lcs_len) + (m < n ? m : n); // Copying once plus remaining characters
}

int main() {
    int q;
    scanf("%d", &q);
    
    while (q--) {
        char s[101], t[101];
        scanf("%s %s", s, t);
        printf("%d\n", min_seconds(s, t));
    }
    
    return 0;
}
