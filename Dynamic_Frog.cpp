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
    cin.tie(0); 
    int T,w=0;
    cin >> T;
    while (T--)
    {
        int n,distance;w++;cin>>n>>distance;int a[distance+1]={0};FOR(i,n){string s;cin>>s;if(s[0]=='B')a[s[2]-'0']=1;else if(s[0]=='S')a[s[2]-'0']=-1;}int ans=INT_MIN,l=0,r=distance;
        a[0]=1;a[distance]=1;
        FOR(i,distance+1){int x=0;if(a[i]==1)ans=max(ans,i-l),l=i;if(a[i]==-1){if(x>1){x=0,ans=max(ans,i-l),l=i;if(a[i]==-1)a[i]=0;}else x++;}}
        FORG(i,distance,0){int x=0;if(a[i]==1)ans=max(ans,r-i),r=i;if(a[i]==-1){if(x>1)x=0,ans=max(ans,r-i),r=i;else x++;}}
        cout<<"Case "<<w<<": "<<ans<<endl;
    }
    return 0;
}