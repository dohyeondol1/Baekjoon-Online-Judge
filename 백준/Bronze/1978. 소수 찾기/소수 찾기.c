#include <stdio.h>

int main(void){
    int N;
    int num, count = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        for (int j = 2; j <= num; j++)
        {
            if(num == j)
                count ++;
            if (num % j == 0)
                break;
        }
    }

    printf("%d", count);

    return 0;
}