#include <stdio.h>

int main(){
    int L,A,B,C,D;
    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
    
    if((A/C) > (B/D)){
        if((A%C) > 0){
            printf("%d", L-(A/C+1));
        }
        else{
            printf("%d", L-(A/C));
        }
    }
    else if((B%D) > 0){
        printf("%d", L-(B/D+1));
    }
    else{
        printf("%d", L-(B/D));
    }
    
    return 0;
}