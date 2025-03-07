#include <stdio.h>
#include <string.h>

int main() {
    char username[101];  // Max length is 100
    int freq[26] = {0};  // Boolean array to track distinct characters
    int distinct_count = 0;
    scanf("%s", username);

    // Count distinct characters
    for (int i = 0; username[i] != '\0'; i++) {
        int index = username[i] - 'a'; // Convert character to index (0 to 25)
        if (freq[index] == 0) { // If this character is seen for the first time
            freq[index] = 1;  // Mark character as seen
            distinct_count++;  // Increase distinct count
        }
    }

    // Output based on distinct character count
    if (distinct_count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
