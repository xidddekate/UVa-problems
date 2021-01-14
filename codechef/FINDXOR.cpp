#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
        vector<long int>xorSumprev;
        vector<long int>xorSumnow;
    while (t--)
    {
        xorSumprev.clear();
        xorSumnow.clear();
        int n;cin>>n;
        //handle 1st TestCase
        if(n==1){cout<<2<<" "<<n;continue;}
        int prev=1,now=2;long int prev_xorsum=5,now_xorsum,x=4;
        // prev_xorsum=94150,now_xorsum=68550; 
        // prev=253,now=509;
        // prev=0,now=899;
        cout<<1<<" "<<now<<endl;
        cin>>now_xorsum;
        while(prev_xorsum+now_xorsum>=((prev+now)*(prev+now)))
        {
            prev=now;x=x*2;
            now=x-3;
            cout<<1<<" "<<now<<endl;
            prev_xorsum=now_xorsum;
            cin>>now_xorsum;
        }
        if(prev==1 && n==2)prev_xorsum=3;

        //         long int xorSumprev[900];
        // long int xorSumnow[900];
        xorSumnow.push_back(0);xorSumprev.push_back(0);
        int start,end;
        for(int i=1;i<1000001;i++)
        {
            xorSumprev.push_back(xorSumprev[i-1]+(i^prev));
            xorSumnow.push_back(xorSumnow[i-1]+(i^now));
            if(i>=n)
            {
                // cout<<i<<" "<<(i^now)<<" "<<xorSumnow[i]<<" "<<xorSumprev[i]<<endl;
                if(xorSumnow[i]-xorSumnow[i-n]==now_xorsum && xorSumprev[i]-xorSumprev[i-n]==prev_xorsum)
                {start=i-n+1,end=i;break;}
            }
        }
        // cout<<start<<" "<<end<<endl;
        int ans=start;
        for(int i=start+1;i<=end;i++)
        ans=(ans^i);
        cout<<2<<" "<<ans<<endl;
    }
    

    return 0;
}