#include <stdio.h>
#include <string.h>
void decode_broze(char * broze_code){
    int length = strlen(broze_code);
    for(int i = 0; i < length; ++i){
        if(broze_code[i] == '.'){
            printf("0");
        } else if(broze_code[i] == '-'){
            if(i + 1 < length && broze_code[i+1] == '.') {
                printf("1");
                i++;
            } else {
                printf("2");
                i++;
            }
        }
    }
    printf("\n");
}
int main(){
    char broze_code[201];
    scanf("%s", broze_code);
    decode_broze(broze_code);
    return 0;

}