#include <stdio.h>
int checkOddDivisor(long long a){
    /*for(int i = 2; i <= a; ++i){
        if(i % 2 != 0 && a % i == 0){
                return 1;
        }
    }
    return 0;*/
     // Keep dividing a by 2 while it is even
     while (a % 2 == 0) {
        a /= 2;
    }
    // If after dividing out all 2s, a > 1, then it had an odd divisor > 1
    return (a > 1);
}

int main(){
    int t;
    scanf("%d", &t);
    long long a;
    for(long long i = 1; i <= t; ++i){
        scanf("%lld\n", &a);
        int res = checkOddDivisor(a);
        if(res == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}