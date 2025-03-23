/*#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int res1 = sqrt((b-a)*(b-a));
    int res2 = sqrt((c-b)*(c-b));
    int res3 = sqrt((c-a)*(c-a));
    int min = res1+res2;
    if(res2+res3 > res1+res2){
        min = res2+res3;
    }
    else{
        min = res3+res1;
    }
    printf("%d", min);
    return 0;
}*/

#include <stdio.h>

int main() {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    // Find the median by sorting the three numbers
    if (x1 > x2) { int temp = x1; x1 = x2; x2 = temp; }
    if (x2 > x3) { int temp = x2; x2 = x3; x3 = temp; }
    if (x1 > x2) { int temp = x1; x1 = x2; x2 = temp; }

    // The median is now x2 best meeting point ......sorting imporatant here
    int min_distance = (x2 - x1) + (x3 - x2);

    printf("%d\n", min_distance);
    return 0;
}
