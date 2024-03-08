#include <stdio.h>
#include <string.h>

int main()
{
    int T, cnt;
    char str[51];
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        cnt = 0;
        scanf("%s", str);
        
        for(int j = 0; j < strlen(str); j++)
        {
            if(str[j] == '(') cnt ++;
            else if(str[j] == ')') cnt --;
            
            if(cnt < 0) break;
        }
        
        if(cnt == 0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}