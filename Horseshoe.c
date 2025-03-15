#include <stdio.h>
int main(){
    int s1, s2, s3, s4;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
    /*if(s1 == s2 && s2 == s3 && s3 == s4){
        printf("3");
    }
    else if((s1 == s2 && s2 == s3) || (s2 == s3 && s3 == s4) || (s1 == s2 && s2 == s4) || (s1 == s3 && s3 == s4) || (s2 == s3 && s1 == s4)){
        printf("2");
    }
    else if(s1 == s2 || s2 == s3 || s3 == s4 || s1 == s4 || s2 == s4){
        printf("1");
    }
    else {
        printf("0");
    }*/
    int horseshoe[4] = {s1, s2, s3, s4};
    int unique = 0;
    for(int i = 0; i < 4; ++i){
        int isNew = 1;
        for(int j = 0; j < i; ++j){
            if(horseshoe[i] == horseshoe[j]){
                isNew = 0;
                break;
            }
        }
        if (isNew) unique++;
    }

    printf("%d\n", 4-unique);
    return 0;
}