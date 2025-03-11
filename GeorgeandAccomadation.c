#include <stdio.h>
int main(){
    int t;
    scanf("%d\n", &t);
    int a,b;
    int count = 0;
    for(int i = 1; i <= t; ++i){
        scanf("%d %d\n", &a, &b);
        if(b - a >= 2){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}