#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int *A;
    A = malloc(n * sizeof(int));
    int i;
    for (i = 0; i < n;i++){
        scanf("%d", A + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    int *dp;
    dp = malloc((n + 1) * sizeof(int));
    for (i = 0; i <= n;i++){
        dp[i] = -1;
    }
    dp[0] = 0;
    for (i = 0; i < n;i++){
        int j;
        int x = A[i];
        if(x == 0){
            if(dp[0]==0){
                dp[0] = 1;
            }
        }
        for (j = 0; j < x; j++)
        {
            dp[x] = dp[x] < (dp[j] + 1) ? (dp[j] + 1) : dp[x];
        }
    }
    int ans = 0;
    for (i = 0; i <= n; i++)
    {
        if(ans<dp[i]){
            ans = dp[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}
