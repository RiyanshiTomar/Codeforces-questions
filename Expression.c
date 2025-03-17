#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);

    int first = a+b*c;
    int second = a*(b+c);
    int third = a*b*c;
    int fourth = (a+b)*c;
    int fifth = a+b+c;

    int max = first;
    if(second > max){
        max = second;
    }
    if(third > max){
        max = third;
    }
    if(fourth > max){
        max = fourth;
    }
    if(fifth > max){
        max = fifth;
    }

    printf("%d\n", max);
    return 0;

}