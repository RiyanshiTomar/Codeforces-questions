#include <stdio.h>

int find_completion_day(int n, int a, int b, int c) {
    int cycle[3] = {a, b, c}; // The repeating pattern of distances
    int total = 0, day = 0;
    
    while (total < n) {
        total += cycle[day % 3]; // Get the distance for the current day
        day++; // Move to the next day
    }
    
    return day;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, a, b, c;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        printf("%d\n", find_completion_day(n, a, b, c));
    }
    
    return 0;
}
