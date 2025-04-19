#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    char str[t];
    scanf("%s", str);
    int count1 = 0, count2 = 0;
    for(int i = 0; i < t; ++i){
        if(str[i] == 'A'){
            count1++;
        }
        else if(str[i] == 'D'){
            count2++;
        }
    }
    if(count1 > count2){
        printf("Anton");
    }
    else if(count1 < count2){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;

}
