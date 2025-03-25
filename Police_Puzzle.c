#include <stdio.h>
int untreated_crime(int t, int a[]){
    int available_officers = 0;
    int untreated = 0;
    for(int i = 0; i < t; ++i){
        if(a[i] == -1){
            if(available_officers > 0){
                available_officers--;

            }
            else{
                untreated++;
            }
        }else{
                available_officers += a[i];
            }
        }
    return untreated;
}

int main(){
    int t;
    scanf("%d\n", &t);
    int a[t];
    for(int i = 0; i <= t-1; ++i){
        scanf("%d", &a[i]);
    }
    printf("%d\n", untreated_crime(t, a));
}