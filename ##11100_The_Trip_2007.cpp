// #include <bits/stdc++.h>
// #define F first
// #define S second
// #define pb push_back
// #define inf 0x3f3f3f3f
// #define mod 1000000007
// #define sq(x) ((x) * (x))
// #define bit(x, y) (((x) >> (y)) & 1)

// #define bctz(x) (__builtin_ctz(x))
// #define bclz(x) (__builtin_clz(x))
// #define bclzl(x) (__builtin_clzl(x))
// #define bctzl(x) (__builtin_ctzl(x))

// #define bpt(x) (__builtin_popcount(x))
// #define bptl(x) (__builtin_popcountll(x))
// #define PQ priority_queue<pii, vector<pii>, greater<pii>>

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

// template <typename T, typename U>
// inline void smin(T &a, const U &b)
// {
//     if (a > b)
//         a = b;
// }

// template <typename T, typename U>
// inline void smax(T &a, const U &b)
// {
//     if (a < b)
//         a = b;
// }

// template <class T>
// inline void read(T &x)
// {
//     char c, sg = 0;
//     while (c = getchar(), (c > '9' || c < '0') && c != '-')
//         ;
//     for ((c == '-' ? sg = 1, c = getchar() : 0), x = 0; c >= '0' && c <= '9'; c = getchar())
//         x = (x << 1) + (x << 3) + c - '0';
//     if (sg)
//         x = -x;
// }

// template <class T1, class T2>
// inline void read(T1 &x1, T2 &x2) { read(x1), read(x2); }

// template <class T1, class T2, class T3>
// inline void read(T1 &x1, T2 &x2, T3 &x3) { read(x1, x2), read(x3); }

// template <class T1, class T2, class T3, class T4>
// inline void read(T1 &x1, T2 &x2, T3 &x3, T4 &x4) { read(x1, x2, x3), read(x4); }

// template <class T1, class T2, class T3, class T4, class T5>
// inline void read(T1 &x1, T2 &x2, T3 &x3, T4 &x4, T5 &x5) { read(x1, x2, x3, x4), read(x5); }

// template <class T>
// inline void print(T x)
// {
//     if (x < 0)
//     {
//         putchar('-');
//         return print(-x);
//     }
//     if (x < 10)
//     {
//         putchar('0' + x);
//         return;
//     }
//     print(x / 10);
//     putchar(x % 10 + '0');
// }

// template <class T>
// inline void println(T x)
// {
//     print(x);
//     putchar('\n');
// }

// template <class T>
// inline void printsp(T x)
// {
//     print(x);
//     putchar(' ');
// }

// template <class T1, class T2>
// inline void print(T1 x1, T2 x2) { printsp(x1), println(x2); }

// template <class T1, class T2, class T3>
// inline void print(T1 x1, T2 x2, T3 x3) { printsp(x1), printsp(x2), println(x3); }

// template <class T1, class T2, class T3, class T4>
// inline void print(T1 x1, T2 x2, T3 x3, T4 x4) { printsp(x1), printsp(x2), printsp(x3), println(x4); }

// template <class T1, class T2, class T3, class T4, class T5>
// inline void print(T1 x1, T2 x2, T3 x3, T4 x4, T5 x5) { printsp(x1), printsp(x2), printsp(x3), printsp(x4), println(x5); }

// int power(int a, int b, int m, int ans = 1)
// {

//     for (; b; b >>= 1, a = 1LL * a * a % m)
//         if (b & 1)
//             ans = 1LL * ans * a % m;

//     return ans;
// }

// int n, k, t;
// int go(int u)
// {

//     u = u % n;

//     if (u == 0)
//         u = n;

//     return u;
// }

// vi v[10000];

// void f()
// {
//     bool x=0;
//     FORG(i, n - 1, 0)
//     {
//         k = v[i].back();if(k==INT_MAX)continue;
//         FORG(j, i - 1, 0)
//         if (v[j][0]!=INT_MAX&&v[j][0] < k)
//         {
//             FOR(l, v[j].size())
//             {
//                 v[i].pb(v[j][l]);
//                 v[j][l] = INT_MAX;
//             }
//             x=1;
//             FOR(i,n){for(auto l:v[i])cout<<l<<" ";cout<<endl;}cout<<endl;
//             break;
//         }
//     }
//     if(x)f();
// }
// int main()
// {
//     while (cin>>n,n)
//     {
//         int a[n];for (int i = 0; i < n; i++)cin>>a[i];
//         vi ans[n];int j=0;sort(a,a+n);for (int i = 0; i < n; i++)v[i].pb(a[i]);
//         f();
//         FOR(i,n)if(v[i][0]!=INT_MAX)ans[j]=v[i],j++;
//         cout<<j<<endl;FOR(i,j){FORG(l,ans[i].size()-1,0)cout<<ans[i][l]<<" ";cout<<endl;}cout<<endl;
//         FOR(i,n)v[i].clear();
//     }

//     return 0;
// }



// exact solution

  
/*
*	User: Isanchez_Aguilar
*	Problem: UVA 11100 - The Trip, 2007
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int knapsacks;
	int dimension[10001];

	while(cin >> knapsacks and knapsacks)
	{
		for(int i = 0; i < knapsacks; ++i)
			cin >> dimension[i];

		int maxRepetitions = 0;
		int currentRepetitions = 1;
		sort(dimension, dimension + knapsacks);

		dimension[knapsacks] = 0;
		for(int i = 0; i < knapsacks; ++i)
		{
			if(dimension[i] == dimension[i + 1])
			{
				++currentRepetitions;
				continue;
			}

			maxRepetitions = max(maxRepetitions, currentRepetitions);
			currentRepetitions = 1;
		}

		cout << maxRepetitions << "\n";

		for(int i = 0; i < maxRepetitions; ++i)
		{
			for(int j = i; j < knapsacks; j += maxRepetitions)
			{
				if(j != i)
					cout << " ";
				cout << dimension[j];
			}
			cout << "\n";
		}

	}

	return 0;
}