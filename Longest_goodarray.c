#include <stdio.h>
#include <math.h>

int max_good_array_length(int l, int r) {
    int length = 1; // Minimum length is always at least 1
    int current = l;
    
    while (current + length <= r) {
        current += length;
        length++;
    }
    
    return length;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", max_good_array_length(l, r));
    }
    
    return 0;
}
