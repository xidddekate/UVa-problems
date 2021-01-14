#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,k,n,p,q,a[1000],x;
    scanf("%d",&t);
    for(x=1; x<=t; x++)
    {
        int sum=0;
        scanf("%d %d %d",&n,&p,&q);
        for(i=0; i<n; i++)
            cin>>a[i];
        k=0;
        for(i=0; i<n && i<p; i++)
        {
            sum+=a[i];
            if(sum>q)
                break;
            k++;
        }
        printf("Case %d: %d\n",x,k);
    }
    return 0;
}