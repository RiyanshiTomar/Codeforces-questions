#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    scanf("%s", str);
    int countUpper = 0;
    int countLower = 0;
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] < 91){
            countUpper++;
        }
        else{
            countLower++;
        }
       
    }
    if(countLower >= countUpper){
        for(int i = 0; str[i] != '\0'; ++i){
            str[i] = tolower(str[i]);
        }
    }
    else{
        for(int i = 0; str[i] != '\0'; ++i){
            str[i] = toupper(str[i]);
        }
    }
    printf("%s", str);
    return 0;
}