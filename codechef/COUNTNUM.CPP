//Author - Rahil Malhotra
#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long
#define double long double

int mini=1e18;
int n;
void dfs(int num,int bit)
{
    cout<<num<<" "<<bit<<endl;
    if(num>n)
    {
        mini=min(mini,num);
        return ;
    }
    if(bit+1==(1<<9))
        return;
    for(int j=0;j<9;j++)
    {
        if((1<<j)&bit)
            continue;
        dfs(num*10+j+1,bit|(1<<j));
    }
}
int32_t main()
{
    IOS;
    cin>>n;
    dfs(0,0);
    cout<<(mini==1e18?0:mini);
}