#include <stdio.h>
#include <string.h>
int main(){
    char a[101], b[101], result[101];
    
    // Read input
    scanf("%100s", a);
    scanf("%100s", b);
    
    int len = strlen(a);

    // Perform XOR operation element-wise
    for (int i = 0; i < len; i++) {
        result[i] = (a[i] - '0') ^ (b[i] - '0') + '0';  //'0' means convert into integer and +'0' again convert into char
    }
    
    result[len] = '\0'; // Null-terminate the string

    // Print the result
    printf("%s\n", result);
}
