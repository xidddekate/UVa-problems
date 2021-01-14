#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long unsigned int dp[n+1];
    dp[0]=0;
    dp[1]=1,dp[2]=2,dp[3]=5;
    long long unsigned int sum[n+1];
    sum[0]=0;sum[1]=1,sum[2]=3,sum[3]=8;
    if(n<4){cout<<dp[n]<<endl;return 0;}
    else    
    {
        for (int i = 4; i < n+1; i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+2+sum[i-3]*2;
            sum[i]=sum[i-1]+dp[i];
            // for (int j = i-3; j >0; j--)
            // {
            //     dp[i]+=dp[j]*2;
            // }
        }
        
    }
    // string ans=to_string(dp[n]);
    // if(ans.length()>4)
    // cout<<ans.substr(ans.length()-4)<<endl;
    // else
    cout<<dp[n]<<endl;
    return 0;
}