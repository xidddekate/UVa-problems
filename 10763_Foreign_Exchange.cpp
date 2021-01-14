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
int t;  
while(cin>>t,t){
    set<pair<int,int>>m;FOR(i,t){int a,b;cin>>a>>b;auto it=m.find({b,a});if(it==m.end())m.insert({a,b});else m.erase(it);}if(m.empty())cout<<"YES"<<endl;else cout<<"NO"<<endl;
}
    return 0;
}