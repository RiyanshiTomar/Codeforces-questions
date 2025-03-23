/*#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int n;
    for(int i = 1; i <= t; ++i){
        scanf("%d", &n);
        if(n % 10 == 0 && n < 10){
            printf("1\n");
            printf("%d\n", n);
        }
        else if(n >=10 && n < 100){
            if(n % 10 == 0){
                printf("1\n");
                printf("%d\n", n);
            }
            else{
                printf("2\n");
                printf("%d %d\n", (n/10)*10, n%10);
            }
        }
        else  if(n % 100 == 0 && n >= 100 && n < 1000){
            if(n % 100 == 0){
                printf("1\n");
                printf("%d\n", n);
            }
            else{
                printf("3\n");
                printf("%d %d %d\n", (n/100)*100, (n/10)*10, n%10);
            }
        }
        else  if(n % 1000 == 0 && n >= 1000 && n < 10000){
            if(n % 1000 == 0){
                printf("1\n");
                printf("%d\n", n);
            }
            else{
                printf("4\n");
                printf("%d %d %d %d\n",(n/1000)*1000, (n/100)*100, (n/10)*10, n%10);
            }
        }
        else if(n == 10000){
            printf("1\n");
            printf("%d\n",n);
        }
    }
    return 0;
}*/
#include <stdio.h>

void find_round_numbers(int n) {
    int round_nums[5]; // To store round numbers (since max n = 10000, max 4 terms needed)
    int count = 0; 
    int place = 1; // Represents 1, 10, 100, 1000

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            round_nums[count++] = digit * place;
        }
        n /= 10;
        place *= 10;
    }

    // Print the result
    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", round_nums[count-i-1]);
    }
    printf("\n");
}

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        find_round_numbers(n);
    }

    return 0;
}
