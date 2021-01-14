#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a)
#define mod 1000000007
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORG(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back
#define MP make_pair 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;int n,k,t;
    while (cin >> s)
    {
        if(s[0]=='0')break;
        n = s[0] - '0';
        int a[n];
        FOR(i, n)
        cin>>a[i];
        bool f = 0;
        FOR(i, n)
        {
            FORL(j, i + 1, n-2)
            {
                k = a[j] - a[i];
                // if (k >= 0)
                {
                    t = *lower_bound(a + j, a + n, k + a[j]);
                    // cout<<n<<" :"<<t<<endl;
                    if (t<n && a[t] == a[j] + k)
                    {
                        f = 1;
                        cout << "no" << endl;
                        break;
                    }
                }
            }
            if (f)
                break;
        }
        if (!f)
            cout << "yes" << endl;
    }

    return 0;
}