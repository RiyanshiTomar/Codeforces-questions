#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(i % 2 != 0){
                printf("#");
            }
            else if(i % 2 == 0 && i % 4 != 0 && j == m){
                printf("#");
            }
            else if(i % 4 == 0 && j == 1){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}