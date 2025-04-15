#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int eligible = 0;
    int arr[n];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d", &arr[i]);
        if(arr[i] < 5-k){
            ++eligible;
        }
    }
    int maxTeams = eligible/3;
    printf("%d\n", maxTeams);

    return 0;
    
    


}