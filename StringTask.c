#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'o' || ch == 'y' ||
           ch == 'e' || ch == 'u' || ch == 'i';
}

int main() {
    char str[101];  
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]);
        if (!is_vowel(ch)) {
            printf(".%c", ch);
        }
    }

    return 0;
}
