#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int m = max(a, max(b, c));
    int s = a+b+c;
    vector<int>buf;
    int hash[50001]={0};
    for (int i = 0; i < s; i++)
    {
        int e;
        cin >> e;
        hash[e]+=1;
        if(hash[e]==2)buf.push_back(e);
    }
    int x=buf.size();
    cout<<x<<endl;
    sort(buf.begin(),buf.end());
    for (int i = 0; i < x; i++)
    {
        cout<<buf[i]<<endl;
    }
    return 0;
}