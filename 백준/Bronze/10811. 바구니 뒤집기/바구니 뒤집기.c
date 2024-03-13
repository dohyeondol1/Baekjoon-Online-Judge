#include <stdio.h>

int main(){
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    int arr[101] = {0,};
    int temp[101] = {0,};
    
    for(int k = 1; k <= N; k++)
    {   
        arr[k] = k;
        temp[k] = k;
    }
    
    for(int k = 0; k < M; k++)
    {
        scanf("%d %d", &i, &j);
        int con = (j-i)/2 + 1;
        
        for(int k = 1; k <= con; k++)
        {
            temp[i] = arr[j];
            arr[j] = arr[i];
            arr[i] = temp[i];
            i++;
            j--;
        }
    }
    
    for(int k = 1; k <= N; k++){
        printf("%d ", arr[k]);
    }
}