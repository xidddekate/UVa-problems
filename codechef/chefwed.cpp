#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        pair<int, int> dp[n + 1][n + 1];
        dp[0][0].first = 0;
        dp[0][0].second = 0;
        memset(dp, 0, sizeof(dp));
        dp[1][1].first = k;
        dp[1][1].second = k;
        int hash[1001] = {0};
        int match = 0;
        hash[arr[0]] += 1;
        for (int i = 2; i <= n; i++)
        {
            hash[arr[i - 1]] += 1;
            if (hash[arr[i - 1]] == 2)
                match += 2;
            else if (hash[arr[i - 1]] > 2)
                match++;
            for (int j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    dp[i][j].first = k + match;
                    dp[i][j].second = k + match;
                }
                else if (j == i)
                {
                    dp[i][j].first = min(j * k, dp[i][j - 1].first);
                    dp[i][j].second = j * k;
                }
                else
                {
                    if (hash[arr[i - 1]] > j)
                    {
                        dp[i][j].first = min(dp[i][j-1].second + hash[arr[i - 1]] - j + 1, dp[i][j - 1].first);
                        dp[i][j].second=dp[i-1][j].second + hash[arr[i - 1]] - j + 1;
                    }
                    else
                    {
                        dp[i][j].first = min(dp[i-1][j].second,dp[i][j-1].first);
                        dp[i][j].second=dp[i-1][j].second;
                    }
                }
            }
        }
        cout << dp[n][n].first << endl;
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 0; j <= i; j++)
        //     {
        //         cout << dp[i][j].first << " "<<dp[i][j].second<<"    ";
        //     }
        //     cout << endl;
        // }
    }

    return 0;
}