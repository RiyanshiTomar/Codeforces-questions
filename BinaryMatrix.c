#include <stdio.h>

#define MAX_N 100
#define MAX_M 100

char matrix[MAX_N][MAX_M];

int min_changes_to_good_matrix(int n, int m) {
    int rowXOR[MAX_N] = {0}, colXOR[MAX_M] = {0};

    // Step 1: Compute row and column XOR
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int value = matrix[i][j] - '0';
            rowXOR[i] ^= value;
            colXOR[j] ^= value;
        }
    }

    // Step 2: Count how many rows and columns have odd XOR
    int rowOddCount = 0, colOddCount = 0;
    for (int i = 0; i < n; i++) {
        if (rowXOR[i] == 1) rowOddCount++;
    }
    for (int j = 0; j < m; j++) {
        if (colXOR[j] == 1) colOddCount++;
    }

    // Step 3: The minimum number of changes needed
    return (rowOddCount == colOddCount) ? rowOddCount : -1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        // Read the binary matrix
        for (int i = 0; i < n; i++) {
            scanf("%s", matrix[i]);
        }

        // Compute and print the result for this test case
        printf("%d\n", min_changes_to_good_matrix(n, m));
    }

    return 0;
}

