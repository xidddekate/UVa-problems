// #include<bits/stdc++.h>
// #define F first
// #define S second
// #define pb push_back
// #define inf 0x3f3f3f3f
// #define mod 1000000007
// #define sq(x) ((x)*(x))
// #define bit(x, y) (((x)>>(y))&1)

// #define bctz(x) (__builtin_ctz(x))
// #define bclz(x) (__builtin_clz(x))
// #define bclzl(x) (__builtin_clzl(x))
// #define bctzl(x) (__builtin_ctzl(x))


// #define bpt(x) (__builtin_popcount(x))
// #define bptl(x) (__builtin_popcountll(x))
// #define PQ priority_queue<pii, vector<pii>, greater<pii> >



// using namespace std;



// typedef double db;
// typedef long long ll;
// typedef pair<int, int> pii;
// typedef pair<pii, int> pi3;
// typedef vector<int> vi;
// typedef vector<vector<int>> vvi;
// typedef vector<pii> vpi;
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
// #define FORG(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
// #define INF 1000000000000000003
// typedef long long int ll;
// typedef vector<int> vi;
// #define F first 
// #define S second 
// #define pb push_back 
// #define pob pop_back
// #define mp make_pair 



// template<typename T, typename U> inline void smin(T &a, const U &b) {if(a>b) a=b;}

// template<typename T, typename U> inline void smax(T &a, const U &b) {if(a<b) a=b;}



// template <class T> inline void read(T &x) {char c, sg=0; while(c=getchar(), (c>'9' || c<'0') && c!='-'); for((c=='-' ? sg=1, c=getchar() : 0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0'; if(sg) x=-x;}

// template <class T1, class T2> inline void read(T1 &x1, T2 &x2) {read(x1), read(x2);}

// template <class T1, class T2, class T3> inline void read(T1 &x1, T2 &x2, T3 &x3) {read(x1, x2), read(x3);}

// template <class T1, class T2, class T3, class T4> inline void read(T1 &x1, T2 &x2, T3 &x3, T4 &x4) {read(x1, x2, x3), read(x4);}

// template <class T1, class T2, class T3, class T4, class T5> inline void read(T1 &x1, T2 &x2, T3 &x3, T4 &x4, T5 &x5) {read(x1, x2, x3, x4), read(x5);}



// template <class T> inline void print(T x) {if(x<0) {putchar('-'); return print(-x);} if(x<10) {putchar('0'+x); return ;} print(x/10); putchar(x%10+'0');}

// template <class T> inline void println(T x) {print(x); putchar('\n');}

// template <class T> inline void printsp(T x) {print(x); putchar(' ');}

// template <class T1, class T2> inline void print(T1 x1, T2 x2) {printsp(x1), println(x2);}

// template <class T1, class T2, class T3> inline void print(T1 x1, T2 x2, T3 x3) {printsp(x1), printsp(x2), println(x3);}

// template <class T1, class T2, class T3, class T4> inline void print(T1 x1, T2 x2, T3 x3, T4 x4) {printsp(x1), printsp(x2), printsp(x3), println(x4);}

// template <class T1, class T2, class T3, class T4, class T5> inline void print(T1 x1, T2 x2, T3 x3, T4 x4, T5 x5) {printsp(x1), printsp(x2), printsp(x3), printsp(x4), println(x5);}



// int power(int a, int b, int m, int ans=1) {

// for (; b; b>>=1, a=1LL*a*a%m) if (b&1) ans=1LL*ans*a%m;

// return ans;

// }



// int n,k,t;
// int go(int u){

// u=u%n;

// if(u==0) u=n;

// return u;

// }


// bool comp(pii a,pii b)
// {
//     return a.F-a.S<b.F-b.S;
// }
// int main(){
// while (cin>>n)
// {
//     k=0,t=0;pii a[n];FOR(i,n)cin>>a[i].F;FOR(i,n)cin>>a[i].S;sort(a,a+n,comp);int t1 = 0, t2 = 0;
// 		for (int i = 0; i < n; i++)
// 			t1 += a[i].F, t2 = max(t1, t2) + a[i].S;
// 		printf("%d\n", t2);
// }



// return 0;
// }                     




#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<functional>
#include<deque>
// C
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cctype>
#include<cmath>
// namespace
using namespace std;
// typedef
typedef long long lli;
typedef unsigned long long ull;
// const variable
#define MAX_N 1000
#define MAX_M 1000
#define INF 2e9
#define NONE -1
#define MAX(x, y, z) {	return max(max(x,y),z);	}
#define MIN(x, y, z) {	return min(min(x,y),z);	}
const double PI = 2.0 * acos(0.0);
// main
int A[MAX_N];
int B[MAX_N];
bool LAcmp(int a, int b){ return A[a] < A[b]; }
bool LBcmp(int a, int b){ return B[a] > B[b]; }
int main(){
	int n;
	while (scanf("%d", &n) == 1){
		for (int i = 0; i < n; i++)
			scanf("%d", A + i);
		for (int i = 0; i < n; i++)
			scanf("%d", B + i);
		vector<int> LA, LB;
		for (int i = 0; i < n; i++){
			if (A[i] < B[i])
				LA.push_back(i);
			else
				LB.push_back(i);
		}
		sort(LA.begin(), LA.end(), LAcmp);
		sort(LB.begin(), LB.end(), LBcmp);
		vector<int> L;
		for (int i = 0; i < LA.size(); i++)	L.push_back(LA[i]);
		for (int i = 0; i < LB.size(); i++)	L.push_back(LB[i]);
		int t1 = 0, t2 = 0;
		for (int i = 0; i < n; i++)
			t1 += A[L[i]], t2 = max(t1, t2) + B[L[i]];
		printf("%d\n", t2);
	}
	return 0;
}