#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    int face = 0;
    char str[20];
    for(int i = 0; i < t; ++i){
    
    scanf("%s", str);
    if (strcmp(str, "Tetrahedron") == 0) {
        face += 4;
    }
    else if (strcmp(str, "Cube") == 0) {
        face += 6;
    }
    else if (strcmp(str, "Octahedron") == 0) {
        face += 8;
    }
    else if (strcmp(str, "Dodecahedron") == 0) {
        face += 12;
    }
    else if (strcmp(str, "Icosahedron") == 0) {
        face += 20;
    }
}
    
    

printf("%d", face);


return 0;
}