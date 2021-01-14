#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n;
    cin >> s;
    string buf = s;
    reverse(s.begin(), s.end());
    int dp[n + 1][n + 1];
    int r, c, max = INT_MIN;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (buf[i - 1] == s[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = 0;
            }
            if (dp[i][j] > max)
            {
                max = dp[i][j];
                r = i, c = j;
            }
        }
    }
    cout<<r<<" "<<c<<endl;
    string ans = "";
    while (dp[r][c] > 0)
    {
        ans += buf[r - 1];
        r--;
        c--;
    }
    cout << max << endl;
    cout << ans << endl;
    // for (int i = 0; i < n+1; i++)
    // {
    //     for (int j = 0; j < n+1; j++)
    //     {cout<<dp[i][j]<<" ";}cout<<endl;}

    return 0;
}