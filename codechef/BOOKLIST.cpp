#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr;
    // vector<int>a;
    // arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int q;
    cin>>q;
    for(int j=0;j<q;j++)
    {
        
        int i;
        cin>>i;
        cout<<arr[i-1]<<endl;
        arr.erase(arr.begin()+i-1);
    }
    
    return 0;
}