#include <stdio.h>
int main(){
    int t;
    scanf("%d\n", &t);
    int k;
    for(int i = 1; i <= t; ++i){
        scanf("%d\n", &k);
        if(k % 6 == 1){  //it follow a cycle of 6 matches  after three games, the cycle repeats every 6 games
            printf("YES\n"); //then first spectator is same as the kth spectator
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}