#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int a[t];
    for(int i = 0; i < t; ++i){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < t; ++i){
        for(int i = 0; i <= t-2; ++i){
            int min_index = i;
            for(int j = i +1; j <= t-1; ++j){
                if(a[j] < a[min_index]){
                    min_index = j;
                }
            }
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        } 
    }
    int res = 0;
    for(int i = 0; i < t-1; ++i){
        if(a[i] < a[t-1]){
          res += a[t-1] - a[i];
        }
    }
    printf("%d", res);
}