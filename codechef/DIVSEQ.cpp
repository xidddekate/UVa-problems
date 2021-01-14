#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll n; cin>>n;
	vector<ll> a;
	unordered_map<ll,ll> m;
	for(int i=0;i<n;i++){
	    int x; cin>>x;
	    a.push_back(x);
	    ll c=0;
	    for(ll j=1;j*j<=x;j++){
	        if(x%j==0){
	            c=max(c,m[j]);
	            c=max(c,m[x/j]);
	        }
	    }
	    m[x]=c+1;
	}
	ll ans=0;
	for(int i=0;i<n;i++)ans=max(ans,m[a[i]]);
	cout<<ans;
	return 0;
}




// problem when duplicates

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     long int arr[n];
// map <long int,int>mp ;
// int ans = 1;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if(mp.find(arr[i])==mp.end())
//             mp[arr[i]]=1;
//         for (int j = i-1; j>=0; j--)
//         {
//             if(arr[i]%arr[j]==0 && mp[arr[j]]+1>mp[arr[i]])
//             {
//                 mp[arr[i]]=mp[arr[j]]+1;
//                 ans=max(ans,mp[arr[i]]);
//             }
//         }
//             cout<<mp[4]<<endl;
//     }
//     cout<<mp[4]<<" "<<mp[8]<<mp[16]<<endl;
//     cout<<ans<<endl;

//     return 0;
// }