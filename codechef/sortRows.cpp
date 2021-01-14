#include <bits/stdc++.h>
using namespace std;

// when true returned don't make changes(for ascending order)
bool comp(const vector<int>& v1,const vector<int>& v2)
{
    int size=v1.size()>v2.size()?v2.size():v1.size();
    for (int i = 0; i <size ; i++)
    {
        if(v1[i]!=v2[i])
        return v1[i]<v2[i];
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int>temp;
        while (1)
        {
            int j;
            cin >> j;
            if (j == -1)
                break;
            else
            {
                temp.push_back(j);
            }
        }
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),comp);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}