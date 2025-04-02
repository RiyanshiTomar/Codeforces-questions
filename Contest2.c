#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        int n;
        scanf("%d", &n); // Read length of the string

        char s[n + 1];
        scanf("%s", s); // Read the input string

        long long count_dash = 0, count_underscore = 0;

        // Count occurrences of '-' and '_'
        for (int i = 0; i < n; i++) {
            if (s[i] == '-') count_dash++;
            else count_underscore++;
        }

        // Compute maximum "-_-" subsequences
        long long result = (count_dash >= 2 && count_underscore >= 1) 
                            ? (count_dash - 1) * count_underscore 
                            : 0;
        printf("%lld\n", result);
    }

    return 0;
}



/*fun main() {
    val t = readLine()!!.toInt() // Read number of test cases

    repeat(t) {
        val n = readLine()!!.toInt() // Read length of string
        val s = readLine()!! // Read string

        val countDash = s.count { it == '-' }
        val countUnderscore = s.count { it == '_' }

        // Compute maximum "-_-" subsequences
        val result = if (countDash >= 2 && countUnderscore >= 1) 
            (countDash.toLong() * (countDash - 1) / 2) * countUnderscore 
        else 
            0

        println(result)
    }
}
    1
    0
    27
    2
    30
    9
    0
    0
    

*/

