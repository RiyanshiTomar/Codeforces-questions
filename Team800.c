/*one day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.

Input
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.

Examples
InputCopy
3
1 1 0
1 1 1
1 0 0
OutputCopy
2*/

#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);  // Read the number of problems
    
    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);  // Read the three values
        if (a + b + c >= 2) {  // Check if at least two friends are sure
            count++;  // Increment count
        }
    }
    
    printf("%d\n", count);  // Print the final count
    return 0;
}
