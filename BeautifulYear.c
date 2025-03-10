/*It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples
InputCopy
1987
OutputCopy
2013*/

#include <stdio.h>

// Function to check if all digits in a number are distinct
int hasDistinctDigits(int year) {
    int digits[10] = {0}; // Array to track digit occurrences
    while (year > 0) {
        int digit = year % 10;
        if (digits[digit]) return 0; // If digit already seen, return false
        digits[digit] = 1;
        year /= 10;
    }
    return 1; // All digits are distinct
}

int main() {
    int y;
    scanf("%d", &y);
    
    while (1) {
        y++;
        if (hasDistinctDigits(y)) {
            printf("%d\n", y);
            break;
        }
    }
    
    return 0;
}
