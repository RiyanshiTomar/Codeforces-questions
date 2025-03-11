#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int x,y;
    int found = 0;
    for(int i = 1; i <= t; ++i){
        scanf("%d\n", &x);
        for(y = 1; y < x; ++y){
        int z = x ^ y;
        if( y > 0 && y < x && z < x && (x + y > z) && (y + z > x) && (x + z > y)){
            printf("%d\n", y);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("-1\n");
    }
}
    return 0;
}

///suggest me changes in this......could not able to solve properly.....