#include <stdio.h>
int main(){
    int n,p,q;
    int levels[101] = {0};

    scanf("%d", &n);

    //input levels little X can pass
    //scanf("%d", &p);
    for(int i = 0; i <= p-1; ++i){
        int level;
        scanf("%d ", &level);
        levels[level] = 1;
    }
    
    //input levels Little Y can pass
    //scanf("%d", &q);
    for(int i = 0; i <= q-1; ++i){
        int level;
        scanf("%d ", &level);
        levels[level] = 1;
    }

    //check if all level from 1 to n are covered
    for(int i = 0; i <= n; ++i){
      if(levels[i] == 1){
        printf("I become the guy.\n");
       
        return 0;
      }
    }
    printf("Oh, my keyboard!\n");

    
    return 0;

}