#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int l,r,d,u;
    for(int i = 1; i <= t; ++i){
        scanf("%d %d %d %d",&l, &r, &d, &u);
        if(l==r && r==d && d==u){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}