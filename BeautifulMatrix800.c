#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];
    int x, y;

    // Read the 5x5 matrix and find the position of '1'
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    // Compute the minimum moves to reach position (2,2) (0-based index)
    printf("%d\n", abs(x - 2) + abs(y - 2));

    return 0;
}
