#include <stdio.h>

int main(){
    int a = 0, b = 0, i, scr;
    
    for(i = 0; i < 4; i++){
        scanf("%d", &scr);
        a += scr;
    }
    
    for(i = 0; i < 4; i++){
        scanf("%d", &scr);
        b += scr;
    }
    
    printf("%d", (a >= b) ? a : b);
    
    return 0;
}