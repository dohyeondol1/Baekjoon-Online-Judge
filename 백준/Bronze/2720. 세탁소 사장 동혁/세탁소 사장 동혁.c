#include <stdio.h>

int main()
{
    int T, C;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &C);
        
        int Q = C/25;
        int D = (C%25)/10;
        int N = ((C%25)%10)/5;
        int P = (((C%25)%10)%5)/1;
        
        printf("%d %d %d %d \n", Q, D, N, P);
    }
    return 0;
}