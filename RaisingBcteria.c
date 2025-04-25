#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int count = 0;
    while (x > 0) {
        count += x & 1;  // Add 1 if the last bit is 1
        x >>= 1;         // Shift right by 1 bit
    }

    printf("%d\n", count);
}