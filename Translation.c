#include <stdio.h>
#include <string.h>
int main(){
    char  str1[101];
    scanf("%s", str1);
    char  str2[101];
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 == len2){
    int flag = 1;
    for(int i = 0; i < len1; ++i){
        if(str1[i] != str2[len2-i-1]){
            flag = 0;
        }
    }
    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
else{
    printf("NO\n");
}
    return 0;






}