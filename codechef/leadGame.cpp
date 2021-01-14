#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int p1_lead=INT_MIN,p2_lead=INT_MIN;
    cin>>n;int sum=0;
    while(n--)
    {
        int p1,p2;
        cin>>p1>>p2;
        if(p1>p2){p1_lead=max(p1_lead,p1-p2);cout<<endl<<"   "<<1<<" "<<p1-p2<<endl;}
        else {sum+=p2-p1;p2_lead=max(p2_lead,p2-p1);cout<<endl<<"   "<<2<<" "<<p2-p1<<endl;}
    }
    if(p1_lead>p2_lead)cout<<1<<" "<<p1_lead+sum<<endl;
    else 
    {
        cout<<2<<" "<<p2_lead<<endl;
    }
    
    return 0;
}