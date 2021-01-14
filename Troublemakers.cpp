// // #include <bits/stdc++.h>
// // using namespace std;
// // #define max(a, b) (a < b ? b : a) 
// // #define min(a, b) ((a > b) ? b : a)
// // #define mod 1000000007
// // #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// // #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
// // #define FORG(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
// // #define INF 1000000000000000003
// // typedef long long int ll;
// // typedef vector<int> vi;
// // typedef pair<int, int> pi;
// // #define F first 
// // #define S second 
// // #define PB push_back 
// // #define POB pop_back
// // #define MP make_pair 
// // int main()
// // {
// //     ios::sync_with_stdio(0);
// //     cin.tie(0); 
// //     int T,c=0;
// //     cin >> T;
// //     while (T--)
// //     {
// //         int n,m;c++;
// //         cin >> n>>m;
// //         pi degree[n+1];FOR(i,n+1)degree[i].F=0,degree[i].S=0;
// //         vi adj[n+1];
// //         FOR(i, m) 
// //         {
// //             int a,b;cin>>a>>b;adj[a].push_back(b);adj[b].push_back(a);
// //             degree[a].F+=1;degree[a].S=a;degree[b].F+=1;degree[b].S=b;
// //         }
// //         sort(degree,degree+n+1);int total=2*m,hash[n+1]={0};vi ans;
// //         // FOR(i,n+1)cout<<degree[i].F<<" "<<degree[i].S<<endl;
// //         FORL(i,1,n+1){degree[i].F-=hash[i];total-=degree[i].F;hash[degree[i].S]-=degree[i].F;ans.push_back(degree[i].S);FOR(j,adj[degree[i].S].size())hash[adj[degree[i].S][j]]-=1;if(total<=m)break;}
// //         if(total>m){cout<<"Impossible"<<endl;continue;}
// //         cout<<"Case #"<<c<<": "<<ans.size()<<endl;
// //         for(int i:ans)cout<<i<<" ";cout<<endl;
// //     }
// //     return 0;
// // }





// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// #include<set>
// #include<bitset>
// #include<algorithm>
// #include<functional>
// #include<deque>
// // C
// #include<cstdio>
// #include<cstring>
// #include<ctime>
// #include<cctype>
// #include<cmath>
// // namespace
// using namespace std;
// // typedef
// typedef long long lli;
// typedef unsigned long long ull;
// // const variable
// #define MAX_N 100
// #define MAX_M 5000
// #define INF 2e9
// #define NONE -1
// #define MAX(x, y, z) {	return max(max(x,y),z);	}
// #define MIN(x, y, z) {	return min(min(x,y),z);	}
// const double PI = 2.0 * acos(0.0);
// // main
// int main(){
// 	int t;
// 	scanf("%d", &t);
// 	for (int c = 1; c <= t; c++){
// 		int n, m;
// 		int G[MAX_N + 1] = { 0 };
// 		pair<int, int> P[MAX_M + 1];
// 		scanf("%d%d", &n, &m);
// 		for (int i = 0; i < m; i++)
// 			scanf("%d%d", &P[i].first, &P[i].second);
// 		for (int i = 1; i <= n; i++){
// 			int count[2] = { 0 };
// 			for (int j = 0; j < m; j++){
// 				if (P[j].first <= i && P[j].second <= i && (P[j].first == i || P[j].second == i)){
// 					if (P[j].first == i)
// 						count[G[P[j].second]]++;
// 					else
// 						count[G[P[j].first]]++;
//                     printf("%d %d %d\n",i,P[j].second,P[j].first);
// 				}
// 			}
// 			if (count[0] > count[1])
// 				{G[i] = 1;cout<<count[0]<<" "<<count[1]<<endl;}
// 		}
// 		vector<int> T;
// 		for (int i = 1; i <= n; i++)
// 			if (G[i] == 1)
// 				T.push_back(i);
// 		printf("Case #%d: %d\n", c, T.size());
// 		for (int i = 0; i < T.size(); i++){
// 			if (i != 0)	putchar(' ');
// 			printf("%d", T[i]);
// 		}
// 		putchar('\n');
// 	}
// 	return 0;
// }








#include<iostream>
#include<vector>

using namespace std;

#define maxn 102

struct ss {
	int x, y;
};

char link[maxn][maxn];

vector<ss>E;

int N, M;

int G1[maxn], G2[maxn];
int ind1, ind2;

void Free() {
	int i;
	for(i = 0; i<E.size(); i++) {
		link[E[i].x][E[i].y] = 0;
		link[E[i].y][E[i].x] = 0;
	}
	E.clear();
}


int Match(int A[], int n, int ind) {
	int i, c = 0;
	for(i = 0; i<ind; i++) {
		if(link[A[i]][n] == 1) c++;
	}
	return c;
}

void Cal() {
	int i, Pair = 0, g1, g2;
	ind1 = 1;
	ind2 = 0;
	G1[0] = 1;
	if(N <= 1) {
		cout<<"0\n";
		return;
	}
	for(i = 2; i<= N; i++) {
		g1 = Match(G1,i,ind1);
		g2 = Match(G2,i,ind2);
		if(g1 < g2) {
			G1[ind1++] = i;
			Pair += g1;
		}else {
			G2[ind2++] = i;
			Pair += g2;
		}
	}
	cout<<ind1<<endl;
	cout<<G1[0];
	for(i = 1; i<ind1; i++)
		cout<<" "<<G1[i];
	cout<<endl;
}

int main() {
	int ks, i, u, v, k = 1;
	cin>>ks;
	ss t;
	while(ks--) {
		cin>>N>>M;
		for(i = 0; i<M; i++) {
			cin>>u>>v;
			link[u][v] = link[v][u] = 1;
			t.x = u;
			t.y = v;
			E.push_back(t);
		}
		cout<<"Case #"<<k++<<": ";
		Cal();
		Free();
	}
	return 0;

}