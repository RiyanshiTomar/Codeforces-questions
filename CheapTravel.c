#include <stdio.h>
int main(){
    int n,m,a,b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    int cost1 = n * a; // Buying n single-ride tickets
    int cost2 = (n / m) * b + (n % m) * a; // Buying as many m-ride tickets as possible, rest as single
    int cost3 = ((n + m - 1) / m) * b; // Buying enough m-ride tickets to cover all rides (even if a few rides wasted)

    int min = cost1;
    if (cost2 < min) min = cost2;
    if (cost3 < min) min = cost3;

    printf("%d\n", min);
    return 0;

}

//cost2 = n/m gives you m ride cover.....then jo bacha vo n%m se hojayega
// cost 3 direct like 
//(n + m - 1) / m is a trick to round up when dividing integers

//Example: If n = 5, m = 2 → (5 + 2 - 1) / 2 = 6 / 2 = 3

//So she buys 3 m-ride tickets → covers 6 rides (1 extra unused)

//cost3 = 3 * b