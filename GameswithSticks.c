#include <stdio.h>
#include <math.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int res = fmin(n,m);
    if(res % 2 == 0){
        printf("Malvika");
    }
    else{
        printf("Akshat");
    }

    return 0;



}