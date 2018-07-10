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
    int k;
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    if (A[0] >= k)
    {
        printf("0\n");
        return 0;
    }
    if(A[n-1]<k){
        printf("%d\n",n);
        return 0;
    }
    int l = 0;
    int r = n - 1;
    while (r-l>1)
    {
        int mid = (l + r) / 2;
        if(A[mid]<k){
            l = mid;
            continue;
        }
        r = mid;
    }
    printf("%d\n", r);
    return 0;
}
