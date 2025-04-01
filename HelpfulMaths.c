/*Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.

Examples
InputCopy
3+2+1
OutputCopy
1+2+3*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rearrange_sum(char *s) {
    int count1 = 0, count2 = 0, count3 = 0;
    
    // Count occurrences of 1, 2, and 3
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') count1++;
        else if (s[i] == '2') count2++;
        else if (s[i] == '3') count3++;
    }

    // Print the sorted sum
    int first = 1;
    while (count1--) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }
    while (count2--) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
    while (count3--) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }
    printf("\n");
}

int main() {
    char s[101];  // Input string (max length 100)
    scanf("%s", s);
    rearrange_sum(s);
    return 0;
}
