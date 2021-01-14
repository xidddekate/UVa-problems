#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans=0,sum=0;
    for (int i = 800; i <= 899; i++)
    {
        ans=(ans^i);
        sum+=(i^509);
    }
    cout<<sum<<endl;
    cout<<ans<<endl;
    cout<<509*253<<" " <<94253+68550<<endl;

    return 0;
}