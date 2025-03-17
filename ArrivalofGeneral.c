#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], max_index = 0, min_index = 0, max_height = 0, min_height = 101;
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if(a[i] > max_height){
            max_height = a[i];
            max_index = i;
        }
        if(a[i] <= min_height){ //ensure that rightmost is minimum
            min_height = a[i];
            min_index = i;
        }
    }
    int swaps = max_index + (n-1-min_index); //if they cross, reduce one swap
    if(max_index > min_index) swaps--;

    printf("%d\n", swaps);
    return 0;
}