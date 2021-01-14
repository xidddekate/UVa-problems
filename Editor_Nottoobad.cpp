#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stack>
#include <iostream>
#include <queue>
using namespace std;
const int maxn = 100 + 5;
typedef pair<int, string> P;

char s[maxn][maxn];
int common[maxn][maxn];
int vis[maxn];
vector<int> ans;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%s", s[i]);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int len = min(strlen(s[i]), strlen(s[j]));
                int cnt = 0;
                for (int k = 0; k < len; k++)
                {
                    if (s[i][k] == s[j][k])
                    {
                        cnt++;
                    }
                    else
                        break;
                }
                common[i][j] = common[j][i] = cnt;
            }
        }
        int step = strlen(s[0]);
        int now = 0;
        memset(vis, 0, sizeof vis);
        ans.clear();
        ans.push_back(0);
        for (int k = 0; k < n - 1; k++)
        {
            int Max = -1, id;
            for (int i = 1; i < n; i++)
            {
                if (!vis[i] && common[now][i] > Max)
                {
                    Max = common[now][i];
                    id = i;
                }
            }
            vis[id] = 1;
            step += strlen(s[id]) - Max;
            ans.push_back(id);
            now = id;
        }
        printf("%d\n", step);
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", s[ans[i]]);
        }
    }
    return 0;
}