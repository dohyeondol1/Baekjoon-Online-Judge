#include <stdio.h>

int main()
{
    int N, M;
    int arr[101] = {0,};
    int a,b,c;
    
    scanf("%d %d", &N, &M);
    for(int i = 0; i < M; i++){
        scanf("%d %d %d", &a, &b, &c);
        for(int j = a; j <= b; j++){
            arr[j] = c;   
        }
    }
    
    for(int k = 1; k <= N; k++){
        printf("%d ", arr[k]);
    }
    return 0;
}
