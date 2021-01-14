#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
 int t,n,k;   
scanf("%d",t);cout<<t<<endl;;while (t--)
{
    int x,a,b;char c;cin>>n>>k>>x;cout<<n<<k<<x<<endl;;vector<pair<int,char>>ans;while(x--){scanf("%c:%d,%d",c,a,b);cout<<"h"<<c<<a<<b<<endl;;int r=n,l=k,y=0;while(r>n)if(r/2>=l)r/=2,y+=b;else r--,y+=a;ans.push_back(make_pair(y,c));}sort(ans.begin(),ans.end());for(int i=0;i<ans.size();i++)cout<<ans[i].second<<" "<<ans[i].first<<endl;
}
    

    return 0;
}