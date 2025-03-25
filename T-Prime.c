/*#include <stdio.h>
int count = 0;
int check_Tprime(int n){
    while(n > 0){
        for(int i = 1; i <= n; ++i){
            if(n % i == 0){
                count++;
            }
        }
    }
    return count;
}
int main(){
   int t;
   scanf("%d", &t);
   int number;
   for(int i = 1; i <= t; ++i){
    scanf("%d ", &number);
   
   int res = check_Tprime(number);
   if(res == 3){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }
}
   return 0;
}*/

#include <stdio.h>
#include <math.h>

int is_prime(long long n) {
    if (n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int is_t_prime(long long n) {
    long long sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n != n) return 0;  // Check if it's a perfect square
    return is_prime(sqrt_n);  // Check if the square root is prime
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long number;
        scanf("%lld", &number);
        
        if (is_t_prime(number)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
