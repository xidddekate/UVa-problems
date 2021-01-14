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
    map<pair<int, int>, int> dp;
    int r, c, max = INT_MIN;
    if (buf == s)
    {
        cout << n << endl;
        cout << s;
    }
    else
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (buf[i - 1] == s[j - 1])
                {
                    if (dp.find({i - 1, j - 1}) != dp.end())
                        dp[{i, j}] = dp[{i - 1, j - 1}] + 1;
                    else
                    {
                        dp[{i, j}] = 1;
                    }
                }

                if (dp[{i, j}] > max)
                {
                    max = dp[{i, j}];
                    r = i, c = j;
                }
            }
        }
        string ans = "";
        // cout<<r<<" "<<c<<endl;
        int x = max;
        while (x--)
        {
            ans += buf[r - 1];
            r--;
            c--;
        }
        cout << max << endl;
        cout << ans << endl;
    }
    // for (int i = 0; i < n+1; i++)
    // {
    //     for (int j = 0; j < n+1; j++)
    //     {cout<<dp[i][j]<<" ";}cout<<endl;}

    return 0;
}