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
        int n, c, k;
        int total = 0;
        cin >> n >> c >> k;
        map<pair<int, int>, int> hash;
        vector<pair<pair<int, int>, int>> col[c];
        set<pair<pair<int, int>, int>> s;
        set<pair<pair<int, int>, int>> parallel;
        int x=n;
        while (x--)
        {
            int a, b;
            int color;
            cin >> a >> b >> color;
            if (color > c)
            {
                cout << -1;
                break;
            }
            int val;

            if (s.find({{a, b}, color}) != s.end())
            {
                n--;
                continue;
            }
            else
            {
                if (hash.find({a, color}) != hash.end())
                {
                    val = hash[{a, color}];
                    hash[{a, color}]++;
                }
                else
                {
                    hash[{a, color}] = 1;
                    val = 0;
                }
                s.insert({{a, b}, color});
                int score = col[color - 1].size();
                if (score < 2 && val==0)
                {
                    score = 0;
                    col[color - 1].push_back(make_pair(make_pair(a, b), score));
                }
                else if (score == 2 && val==0)
                {
                    total++;
                    score = 1;
                    col[color - 1].push_back(make_pair(make_pair(a, b), score));
                }
                else if(score<3 && val!=0)
                {
                    parallel.insert({{a,b},color});
                }
                else
                {
                    score = (score - val) * (score - val - 1) / 2;
                    // int prev = col[color - 1].back().second; score is no. of triangles
                    total += score;
                    col[color - 1].push_back(make_pair(make_pair(a, b), score));
                }
            }
        }
         set <pair<pair<int, int>, int>> ::iterator itr;
         for ( itr=parallel.begin(); itr != parallel.end(); itr++)
         {
             int score,val;
             int a=itr->first.first;
             int b=itr->first.second;
             int color=itr->second;
              if (hash.find({a, color}) != hash.end())
                {
                    val = hash[{a, color}];
                    hash[{a, color}]++;
                }
                else
                {
                    hash[{a, color}] = 1;
                    val = 0;
                }
            score = (score - val) * (score - val - 1) / 2;
                    // int prev = col[color - 1].back().second; score is no. of triangles
                    total += score;
                    col[color - 1].push_back(make_pair(make_pair(a, b), score));
         }
         
        int weight[k];
        for (int i = 0; i < c; i++)
        {
            cin >> weight[i];
        }

        int dp[n + 1][k + 1];
        int m = 0;
        int index = -2;
        int len = col[m].size();
        for (int i = 0; i < n + 1; i++)
        {
            index++;
            if (len == i - 1)
            {
                m++;
                len += col[m].size();
                index = 0;
            }
            for (int j = 0; j < k + 1; j++)
            {
        //    cout<<m<<" "<<index<<"   ";
                if (i == 0 || j == 0)
                    {dp[i][j] = 0;}
                else if (j >= weight[m])
                {
                    dp[i][j] = max(dp[i - 1][j - weight[m]] + col[m][index].second, dp[i-1][j]);
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        cout <<total- dp[n][k] << endl;
        // for (int i = 0; i < n + 1; i++)
        // {
        //     for (int j = 0; j < k+1; j++)
        //     {
        //     cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        // for (int i = 0; i < c; i++)
        // {
        //     for (int j = 0; j < col[i].size(); j++)
        //     {
        //         cout << col[i][j].first.first << " " << col[i][j].first.second << " " << col[i][j].second << "       ";
        //     }
        //     cout << endl;
        // }
       

    }

    return 0;
}