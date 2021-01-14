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
string s,t;
int n,m;
bool f(int sind,int tind)
{
    if(sind==n)return true;
    else if(tind==m)return false;
    FORL(i,tind+1,m)if(s[sind]==t[i])return f(sind+1,i);
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    while (cin>>s>>t)
    {
        m=t.size();n=s.size();bool x=f(0,-1);if(x)cout<<"Yes"<<endl;else cout<<"No"<<endl;
    }
    
    return 0;
}