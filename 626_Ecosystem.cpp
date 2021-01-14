#include<bits/stdc++.h>
 
#define rep(i,n) for(i=0;i<n;i++)
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ll n,i,j;
    while(cin>>n){
        ll a[n][n];
        rep(i,n)rep(j,n) cin>>a[i][j];
        ll tot=0;
        rep(i,n)rep(j,n){
          if(j!=i && a[i][j]){
            for(ll l=0;l<n;l++){
                if(l!=j && a[j][l]){
                    if(a[l][i]){
                        // cout<<i+1<<j+1<<l+1<<endl;
                      if((i>j && j>l) || (i<j && j<l)){
                        cout<<i+1<<" "<<j+1<<" "<<l+1<<endl;
                        tot++;
                      }
                    }
                }
            }
          }
        }
        cout<<"total:"<<tot<<endl<<endl;;
    }}