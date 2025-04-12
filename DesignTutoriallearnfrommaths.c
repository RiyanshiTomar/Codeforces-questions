#include <stdio.h>
int is_composite(int n){
    if(n <= 3) return 0;
    for(int i = 2; i*i <= n; ++i){
        if(n % i == 0){
           return i;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 4; i <= n / 2; ++i) {
        if (is_composite(i) && is_composite(n - i)) {
            printf("%d %d\n", i, n - i);
            return 0;
        }
    }

    printf("No such pair found.\n");
    return 0;
    
}