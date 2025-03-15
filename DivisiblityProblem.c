#include <stdio.h>
int main(){
    int count = 0;
    int t;
    scanf("%d\n", &t);
    while(t--){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a % b == 0){
        printf("0\n");
    } else {
        printf("%d\n", b - (a % b));
    }
}
    return 0;
}