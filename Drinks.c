#include <stdio.h>
int main(){
    int n;
    scanf("%d\n", &n);
    double sum = 0;
    int vol;
    for(int i = 1; i < n; ++i){
        scanf("%d ", &vol);
        sum += vol;

    }
    double result = sum / n;
    printf("%.12lf", result*2);

    return 0;
}