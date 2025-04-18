#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n, &m);
    int a[m];
    for(int i = 0; i < m; ++i){
        scanf("%d", &a[i]);
    }
    long long count = 0;
    int current = 1;
    for(int i = 0; i < m; ++i){
        if(a[i] >= current){
            count += a[i] - current;
        } else {
            count += n - current + a[i];
        }
        current = a[i];
        
    }
    printf("%lld", count);
    return 0;
}