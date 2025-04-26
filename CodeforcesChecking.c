#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    char c;
    char s[] = "codeforces";

    // Consume the leftover newline
    getchar();

    while (t--) {
        scanf("%c", &c);
        getchar(); // consume the newline after the character

        if (strchr(s, c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
