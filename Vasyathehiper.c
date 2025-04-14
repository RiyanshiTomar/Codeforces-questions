#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int different;
    int res;
    if(a > b){
        different = b;
        res = a-b;
        printf("%d %d", different, res/2);
    }
    else{
        different = a;
        res = b-a;
        printf("%d %d", different, res/2);
        
    }
    return 0;
    
}