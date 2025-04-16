#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    
    // Read inputs
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    
    // Total available resources
    int total_drink = k * l;          // total ml of drink
    int total_slices = c * d;         // total slices of lime
    int total_salt = p;               // total grams of salt
    
    // Number of toasts that can be made from each resource
    int toasts_from_drink = total_drink / (n * nl);
    int toasts_from_limes = total_slices / n;
    int toasts_from_salt = total_salt / (n * np);
    
    // The limiting factor determines the total number of toasts per friend
    int min_toasts = toasts_from_drink;
    if (toasts_from_limes < min_toasts)
        min_toasts = toasts_from_limes;
    if (toasts_from_salt < min_toasts)
        min_toasts = toasts_from_salt;
    
    // Output the result
    printf("%d\n", min_toasts);
    
    return 0;
}
