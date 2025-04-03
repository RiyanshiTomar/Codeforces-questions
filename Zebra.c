#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Function to check if a number is zebra-like
bool is_zebra_like(uint64_t num) {
    if ((num & 1) == 0) return false; // Least significant bit must be 1
    while (num > 1) {
        if (((num & 1) == ((num >> 1) & 1))) return false; // Adjacent bits should not be equal
        num >>= 1;
    }
    return true;
}

// Function to generate all possible zebra-like numbers up to a certain limit
void generate_zebra_numbers(uint64_t limit, uint64_t *zebra_nums, int *count) {
    *count = 0;
    for (uint64_t i = 1; i <= limit; i += 2) { // Iterate over odd numbers only
        if (is_zebra_like(i)) {
            zebra_nums[(*count)++] = i;
        }
    }
}

// Function to determine the zebra value of a given number
int zebra_value(uint64_t num, uint64_t *zebra_nums, int zebra_count) {
    if (num == 0) return 0;
    for (int i = 0; i < zebra_count; i++) {
        if (zebra_nums[i] == num) return 1;
    }
    
    // Simple approach using dynamic programming
    int min_parts = 100; // Arbitrary high value
    for (int i = 0; i < zebra_count; i++) {
        if (zebra_nums[i] > num) break;
        int sub_val = zebra_value(num - zebra_nums[i], zebra_nums, zebra_count);
        if (sub_val > 0 && sub_val + 1 < min_parts) {
            min_parts = sub_val + 1;
        }
    }
    return (min_parts == 100) ? -1 : min_parts;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        uint64_t l, r, k;
        scanf("%llu %llu %llu", &l, &r, &k);
        
        uint64_t zebra_nums[64]; // Precompute small zebra-like numbers
        int zebra_count;
        generate_zebra_numbers(r, zebra_nums, &zebra_count);
        
        int count = 0;
        for (uint64_t x = l; x <= r; x++) {
            if (zebra_value(x, zebra_nums, zebra_count) == k) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}
