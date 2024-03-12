#include <stdio.h>

int main()
{
    long long N, ans, temp, day;
    scanf("%lld", &N);
        
    if(N > 28)
    {
        ans = (N+21)/7;
        day = ans;
    
        for(int i = 0; i < 7; i++)
        {
            temp += day;
            day --;
        }
        if(temp < N) ans += 1;
    }
    else
    {
        temp = 0;
        ans = 0;
        for(int i = 1; i < 8; i++)
        {
            temp += i;
            if(temp >= N)
            {
                ans = i;
                break;
            }
        }
    }
    
    printf("%lld", ans);
    
    return 0;
}