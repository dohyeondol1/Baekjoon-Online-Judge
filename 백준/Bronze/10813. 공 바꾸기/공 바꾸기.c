#include <stdio.h>

int main()
{
    int N, M, a, b;
    int arr[101] = {0,};
    int temp[1] = {0};
    scanf("%d %d", &N, &M);
    
    for(int i = 1; i <= N; i++){
        arr[i] = i;
    }
    for(int j = 0; j < M; j++){
        scanf("%d %d", &a, &b);
        temp[0] = arr[a];
        arr[a] = arr[b];
        arr[b] = temp[0];
    }
    for(int i = 1; i <= N; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
