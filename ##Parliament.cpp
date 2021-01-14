#include <cstdio>
using namespace std;
int main()
{
    int M,N;
    scanf("%d", &M);
    while (M--) {
        scanf("%d", &N);
        int ans[1001],nOfans = 0, sum = 0;
        for (int i = 2; sum + i <= N; i++){
            sum += i;
            ans[nOfans++] = i;
        }
        int left = N - sum;
        for (int i = nOfans-1; left > 0; i--, left--){
            if (i < 0) i = nOfans-1;
            ans[i]++;
        }
        
        printf("%d", ans[0]);
        for (int i = 1; i < nOfans; i++)
            printf(" %d", ans[i]);
        printf("\n");
        if (M) printf("\n");
    }
    return 0;
}