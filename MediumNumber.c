#include <stdio.h>

int main(){
    int t;
    scanf("%d\n", &t);
    int a,b,c;
    for(int i = 1; i <= t; ++i){
        scanf("%d %d %d\n", &a, &b,&c);
        if((a > b && b > c) || (c > b && b > a)){
            printf("%d\n", b);
        }
        else if((a > c && c > b) || (b > c && c > a)){
            printf("%d\n", c);
        }
        else {
            printf("%d\n", a);
        }
        /*else if(a < b && b > c && c > a){
            printf("%d\n", c);
        }*/

    }
    return 0;


}