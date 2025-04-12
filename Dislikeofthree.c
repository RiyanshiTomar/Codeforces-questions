#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; ++i){
        int k;
        scanf("%d", &k);
        int count = 0;
        int current = 1;
        while(1){
            if(current % 3 != 0 && current % 10 != 3){
                count += 1;
                if(count == k){
                    printf("%d\n", current);
                    break;
                }
                
            }
            current++;
        }

    }
    return 0;
}