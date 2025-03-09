#include <stdio.h>
int main(){
    int k,n,w;
    scanf("%d %d %d", &k, &n, &w);
    int res = 0;
    for(int i = 1; i <= w; ++i){
           res += i*k;
    }
    if(n > res){
        printf("0");
    } else{
    printf("%d", res-n);
    }
    return 0;
}