#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        // Total jam required is n * 3 kg
        int total_jam = n * 3;
        
        // Since 3/4 of the cooked mixture remains after evaporation,
        // the initial mixture (berries + sugar) must be total_jam * 4 / 3
        int total_mixture = (total_jam * 4) / 3;
        
        // Since berries and sugar are equal parts, berries needed is half of the mixture
        int berries_needed = total_mixture / 2;
        
        printf("%d\n", berries_needed);
    }
    
    return 0;
}