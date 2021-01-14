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
    ios::sync_with_stdio(0);
    cin.tie(0); int z=1;
    int b,s;while (cin>>b>>s,b&&s)
    {
        int bm=INT_MAX,sm=INT_MAX,x;FOR(i,b){cin>>x;if(x<bm)bm=x;}FOR(i,s){cin>>x;if(x<bm)sm=x;}
        if(b>s)cout<<"Case "<<z++<<": "<<b-s<<" "<<bm<<endl;
        // else if(s>b)cout<<"Case "<<z++<<": "<<s-b<<" "<<sm<<endl;
        else cout<<"Case "<<z++<<": "<<0<<endl;
    }
    
    return 0;
}