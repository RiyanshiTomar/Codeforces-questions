#include <stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);

    long long res;
    if(n % 2 == 0){
        res = n/2;
    } else{
        res = -(n+1)/2;
    }

    printf("%lld\n", res);
    return 0;

}