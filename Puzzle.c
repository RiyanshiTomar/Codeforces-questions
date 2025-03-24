#include <stdio.h>
#include <limits.h>

void sortArray(int arr[], int size) {
    // Simple Bubble Sort (since max size is small, 50)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMinDifference(int n, int m, int puzzles[]) {
    // Step 1: Sort the puzzle pieces array
    sortArray(puzzles, m);

    int minDifference = INT_MAX;

    // Step 2: Sliding window approach
    for (int i = 0; i <= m - n; i++) {
        int difference = puzzles[i + n - 1] - puzzles[i];
        if (difference < minDifference) {
            minDifference = difference;
        }
    }

    return minDifference;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int puzzles[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &puzzles[i]);
    }

    printf("%d\n", findMinDifference(n, m, puzzles));

    return 0;
}
