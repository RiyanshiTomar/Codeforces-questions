#include <stdio.h>

// Function to check if a number is lucky (contains only digits 4 and 7)
int is_lucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return 0; // Not a lucky number
        }
        num /= 10;
    }
    return 1; // It's a lucky number
}

int main() {
    int n;
    scanf("%d", &n);

    // Checking if n is divisible by any lucky number
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int size = sizeof(lucky_numbers) / sizeof(lucky_numbers[0]);
    
    for (int i = 0; i < size; i++) {
        if (n % lucky_numbers[i] == 0) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}



