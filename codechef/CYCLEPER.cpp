#include <bits/stdc++.h>
using namespace std;

vector<int>cykl;
void dfs(int v[],int u,bool visited[])
{
    // cout<<u<<" ";
    cykl.push_back(u);
    if(visited[u])
    {
        return;
    }
    visited[u]=true;
    dfs(v,v[u],visited);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 1; i < n+1; i++)
    {
        cin>>arr[i];
    }
    bool visited[n+1]={0};
    int cycles=0;
    vector<vector<int>>ans;
for (int i = 1; i < n+1; i++)
{
    if(!visited[i])
    {cycles++;cykl.clear();dfs(arr,i,visited);ans.push_back(cykl);}
}
cout<<cycles<<endl;
for (int i = 0; i < ans.size(); i++)
{
    for (int j = 0; j < ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}