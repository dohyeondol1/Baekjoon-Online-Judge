#include <stdio.h>

int n;
int code1 = 0, code2 = 0;

int fib(n) {
    if (n == 1 || n == 2) code1 ++;
    else{
        return (fib(n - 1) + fib(n - 2));
    }
}

int main(){
    int f[41] = {1, 1,};
    scanf("%d", &n);
    
    fib(n);
    for(int i = 3; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
        code2 ++;
    }
    
    printf("%d %d", code1, code2);
}