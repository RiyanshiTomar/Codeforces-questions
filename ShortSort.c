#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    char s[4]; // Since the string is 3 characters + 1 for null terminator

    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);

        // Convert to lowercase
        for (int i = 0; i < 3; i++) {
            s[i] = tolower(s[i]);
        }

        if (strcmp(s, "yes") == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
