/*Allen has a LOT of money. He has n
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
, 5
, 10
, 20
, 100
. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n
 (1≤n≤109
).

Output
Output the minimum number of bills that Allen could receive.

Examples
InputCopy
125
OutputCopy
3*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int bills = 0;
    bills += n / 100;
    n %= 100;

    bills += n / 20;
    n %= 20;

    bills += n / 10;
    n %= 10;

    bills += n / 5;
    n %= 5;

    bills += n;

    printf("%d\n", bills);

    return 0;
}