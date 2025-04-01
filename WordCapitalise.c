/*Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
InputCopy
ApPLe
OutputCopy
ApPLe*/

#include <stdio.h>
#include <ctype.h>

void capitalize_word(char *word) {
    if (word[0] >= 'a' && word[0] <= 'z') {  // Check if the first letter is lowercase
        word[0] = toupper(word[0]);  // Convert it to uppercase
    }
    printf("%s\n", word);
}

int main() {
    char word[1004];  // Allocate space for up to 103 characters plus null terminator
    scanf("%s", word);
    capitalize_word(word);
    return 0;
}
