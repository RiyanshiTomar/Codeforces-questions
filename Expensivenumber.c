#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[105];
        scanf("%s", s);
        int len = strlen(s);

        double min_cost = DBL_MAX;
        int min_removed = INT_MAX;

        // Try all contiguous substrings
        for (int i = 0; i < len; i++) {
            long long value = 0;
            int digit_sum = 0;

            for (int j = i; j < len; j++) {
                int digit = s[j] - '0';
                value = value * 10 + digit;
                digit_sum += digit;

                if (digit_sum == 0) continue;

                double cost = (double)value / digit_sum;
                int removed = len - (j - i + 1);

                if (cost < min_cost || (cost == min_cost && removed < min_removed)) {
                    min_cost = cost;
                    min_removed = removed;
                }
            }
        }
        printf("%d\n", min_removed);
    }
    return 0;
}
