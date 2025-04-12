#include <stdio.h>
int main(){
    /*int n;
    scanf("%d", &n);
    for(int t = 0; t < n; ++t){
    int nums[3];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d", &nums[i]);
    }
    int freq[3] = {0,0,0};

    for(int i = 0; i <= 2; ++i){
         int count = 1;
        if(freq[i] != -1){
           
            for(int j = i+1; j <3; ++j){
                if(nums[i] == nums[j]){
                freq[j] = -1;
                count++;
            }
        }
            
        freq[i] = count;
    }
    }

for(int i = 0; i < 3; ++i){
if(freq[i] == 1){
    printf("%d\n", nums[i]);
    break;
}
}
}*/
int n;
    scanf("%d", &n);  // Number of test cases

    for (int t = 0; t < n; ++t) {
        int nums[3];
        for (int i = 0; i < 3; ++i) {
            scanf("%d", &nums[i]);
        }

        // Find unique number
        if (nums[0] == nums[1])
            printf("%d\n", nums[2]);
        else if (nums[0] == nums[2])
            printf("%d\n", nums[1]);
        else
            printf("%d\n", nums[0]);
    }

    return 0;
}