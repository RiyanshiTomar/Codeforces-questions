#include <stdio.h>
#include <string.h>
int main(){
    int t, groups = 1;
    char previous[3], current[3];
    scanf("%d", &t);
    scanf("%s", &previous);
    for(int i = 1; i < t; ++i){
        scanf("%s\n", &current);
        if(current[0] != previous[0]) {
            groups++;
        }
        previous[0] = current[0];
    }

    printf("%d\n", groups);
    return 0;
}