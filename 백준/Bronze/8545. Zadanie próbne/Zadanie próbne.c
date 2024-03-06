#include <stdio.h>

int main(){
    char input[3];
    scanf("%s", &input);
    for(int i = 1; i < 4; i++){
        printf("%c", input[3-i]);
    }
    
    return 0;
}