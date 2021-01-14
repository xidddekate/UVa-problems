/*
@author: arc_9693
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 1000000007
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define in(a,n) f(i,n){cin>>a[i];}
#define ou(a,n) f(i,n){cout<<a[i]<<" ";}cout<<endl;
#define sv(v) sort(v.begin(),v.end());
#define sa(a,n) sort(a,a+n);
#define mp make_pair
#define pb push_back
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vec vector<ll>
#define vec_p vector<pair<ll,ll>>

int main()
{               
				ios::sync_with_stdio(false);
                cin.tie(0);
                int t=1;
                cin>>t;
                while(t--)
                {
                    string time;
                    cin>>time;
                    string hour=time.substr(0,2);
                    string min=time.substr(3,2);
                   
                    float hh=stoi(hour);
                    float mm=stoi(min);

                    cout<<hh<<" "<<mm<<endl;
                    if(hh>=12) hh=hh-12;
                    //cout<<hh<<" "<<mm<<endl;
                    // 360/12 is 30
                    // 360/12 is  agian 5*6
                    //cout<<abs(hour_angle-min_angle)<<endl;
                    float hour_angle = 0.5 * (hh * 60 + mm); 
				    float minute_angle = 6 * mm; 
                   cout<<hour_angle<<" "<<minute_angle<<endl;
				 
				    // Find the difference between two angles 
				    float angle = abs(hour_angle - minute_angle); 
				 
				    // Return the smaller angle of two possible angles 
				    if(360-angle<angle)
				    angle = 360 - angle;
                  //  cout<<diff<<endl;
                    cout<<angle<<" degree"<<endl;

                }
                return 0;
}