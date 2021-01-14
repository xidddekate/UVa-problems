#include <cstdio>
#include <vector>
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<sstream>
using namespace std;
int  array[1002][1002];
 
int main()
{
 
    int n;
    while(scanf("%d",&n)!=EOF)
    {
 
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                scanf("%d",&array[i][j]);
        vector<int>a,b,c;
        int  ans=0;
        for ( int i = 1; i <= n; i++)
            for (int j =  1; j <= n; j++)
                for (int k =     1; k <= n; k++)
                {
                    if(  ((i>j&&j>k)||(i<j&&j<k))&&( array[i][j]==1&&array[j][k]==1  && array[k][i]==1))
                    {
                     
                        ans++;
                        a.push_back(i);
                        b.push_back(j);
                        c.push_back(k);
                    }
                    else if((i<j&&j<k) && array[i][j]==0&&array[j][k]==0  && array[i][k]==0&&array[j][i]==0 &&array[k][i]==0&&array[k][j]==0 )
                    {
                        ans++;
                        a.push_back(i);
                        b.push_back(j);
                        c.push_back(k);
                    }
                }
        printf("%d\n",ans);     
        for(int i=0; i<a.size(); i++)
            printf("%d %d %d\n",a[i],b[i],c[i]);
    }
 
    return 0;
}