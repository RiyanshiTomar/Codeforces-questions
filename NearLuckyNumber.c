/*Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

Examples
InputCopy
40047
OutputCopy
NO*/

#include <stdio.h> 
int count = 0;
int count_lucky_digit(long long n){
    while(n > 0){
        int rem = n % 10;
        if(rem == 4 || rem == 7){
           count++;
        }
    n = n/10;
    }
    return count;
    
}

int is_lucky_Number(long long num){
    if(num == 0) return 0;    //no lucky number means return false
    while(num > 0){
        int digit = num % 10;
        if(digit != 4 && digit != 7) return 0;
        num /= 10;
    }
    return 1;
}
int main(){
    long long n;
    scanf("%lld", &n);
    int lucky_count = count_lucky_digit(n);

    if(is_lucky_Number(lucky_count)) {
        printf("YES\n");
    } else {
        printf("NO");
    }

return 0;
}