#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int function;
    for(int i = 1; i <= n; ++i){
        if(n % 2 == 0){
            function = n/2;
        }
        else {
            function = -(n + 1)/2;
        }
    }
    printf("%d", function);
    return 0;
}