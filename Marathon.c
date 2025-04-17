#include <stdio.h>
int Checkfunction(int * arr){
     int count = 0;
     for(int i = 1; i <= 3; ++i){
        if(arr[0] < arr[i]){
            count++;
        }
     }
     return count;
}
int main(){
    int t;
    scanf("%d", &t);
    int arr[4];
    for(int i = 1; i <= t; ++i){
        for(int j = 0; j <= 3; ++j){
        scanf("%d", &arr[j]);
        }
        int res = Checkfunction(arr);
        printf("%d\n", res);
    }
    return 0;
}