#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read number of test cases

    while (t--) {
        char str1[11], str2[11], str3[11];  // Max 10 characters + null terminator

        scanf("%s %s %s", str1, str2, str3);  // Read the three strings

        // Print the first character of each string
        printf("%c%c%c\n", str1[0], str2[0], str3[0]);
    }

    return 0;
}
