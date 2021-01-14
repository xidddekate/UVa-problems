#include <cstdio>
#include <string.h>
#include<iostream>
using namespace std;
int MAP[101][101];
int Dp[101][101];
int main()
{
    int n,m;
    while(scanf("%d",&n)&&n)
    {
        scanf("%d",&m);
        memset(Dp,0,sizeof Dp);
        char C;
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
            {
                cin>>C;
                MAP[i][j]=C-'0';
                Dp[i][j]=MAP[i][j];
                if(i>0)
                    Dp[i][j]+=Dp[i-1][j];
                if(j>0)
                    Dp[i][j]+=Dp[i][j-1];
                if(i>0&&j>0)
                    Dp[i][j]-=Dp[i-1][j-1];
 
            }
 
        int ans=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                //cout<<1<<endl;
                for(int k=i; k<n; k++)
                    for(int l=j; l<m; l++)
                    {
                        int sum=Dp[k][l];
                        if(i>0)
                            sum-=Dp[i-1][l];
                        if(j>0)
                            sum-=Dp[k][j-1];
 
                        if(i>0&&j>0)
                            sum+=Dp[i-1][j-1];
                        if(sum==(k+1-i)*(l+1-j))
                            ans++;
                    }
            }
        printf("%d\n",ans);
 
    }
return 0;
}