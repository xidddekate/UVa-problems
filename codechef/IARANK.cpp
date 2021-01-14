#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w;
     vector <int> v;
     cin>>n;
    while(n--)
    {
        int count=1;
        cin>>w;
        v.push_back(w);
        for (int i =  v.size()-1; i >=0; i--)
        {
            if(v[i]>w)
            count++;
        }
        cout<<count<<endl;
    }

    return 0;
}