#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char  str[101];
    scanf("%s", str);
    if(str[0] > 96){
        str[0] = toupper(str[0]);
    }
    for(int i = 1; str[i] != '\0'; ++i){
        if(str[i] < 91){
            str[i] = tolower(str[i]);
        }
        

    }
    printf("%s", str);
    return 0;
}