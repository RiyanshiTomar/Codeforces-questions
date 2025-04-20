#include <stdio.h>
int main(){
    char str[101];
    scanf("%s", str);
    int count = 1;
    for(int i = 1; str[i] != '\0'; ++i){
        if(str[i] == str[i-1]){
            count++;
            if(count >= 7){
                printf("YES\n");
                return 0;
            }
            
        } else{
            count = 1;
        }
    }
    printf("NO\n");

    return 0;
}