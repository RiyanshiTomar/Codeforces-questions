#include <stdio.h>
 
int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);
 
    long long odd_count = (n + 1) / 2; // Number of odd numbers in the sequence
 
    if (k <= odd_count) {
        printf("%lld\n", 2 * k - 1); // k-th number in the odd sequence
    } else {
        printf("%lld\n", 2 * (k - odd_count)); // k-th number in the even sequence
    }
 
    return 0;
}
