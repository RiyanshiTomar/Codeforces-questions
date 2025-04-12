#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; ++i){
        int n;
    scanf("%d", &n);
    int sum = 0;
    int a = n;
    while(a > 0){
        int rem = a % 10;
        sum = sum + rem;
        a = a/10;
    }
    printf("%d\n", sum);
    }
    return 0;


}