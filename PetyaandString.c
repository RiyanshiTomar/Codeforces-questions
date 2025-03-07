#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toLowerCase(char str[]){
    for(int i = 0; str[i]; ++i){
        str[i] = tolower(str[i]);
    }

}

int main() {
    char str1[100];
    char str2[100];
    scanf("%s\n", str1);
    scanf("%s\n", str2);
    toLowerCase(str1);
    toLowerCase(str2);
    int result = strcmp(str1, str2);
    printf("%d\n", result);
    return 0;
    /*if(strlen(str1) > strlen(str2)){
        printf("1");
    }
    else if(strlen(str1) < strlen(str2)){
        printf("-1");
    }
    else {
        printf("0");
    }*/

}