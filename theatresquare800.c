/*Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.

Examples
InputCopy
6 6 4
OutputCopy we have to 
4*/

#include <stdio.h>
 
int main() {
    long long n, m, a;  // Use long long to avoid integer overflow
    scanf("%lld %lld %lld", &n, &m, &a);  
    
    long long tiles_n = (n + a - 1) / a; //bro we use ceil function here.....let me know more ways to optimise this one ....
    long long tiles_m = (m + a - 1) / a;
    
    long long total_tiles = tiles_n * tiles_m;
 
    printf("%lld\n", total_tiles);  
    
    return 0;
}