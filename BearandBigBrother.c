#include <stdio.h>
int main(){
    int limak, bob;
    int year = 0;
    scanf("%d %d", &limak, &bob);
    while(limak <= bob){
        year += 1;
        bob *= 2;
        limak *= 3;
        
    }
    printf("%d", year);
    return 0;
}