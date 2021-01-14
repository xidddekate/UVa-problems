#include<bits/stdc++.h>
#define fst first
#define scnd second
#define pb push_back
#define inf 0x3f3f3f3f
#define mod 1000000007
#define sq(x) ((x)*(x))
#define bit(x, y) (((x)>>(y))&1)

#define bctz(x) (__builtin_ctz(x))
#define bclz(x) (__builtin_clz(x))
#define bclzl(x) (__builtin_clzl(x))
#define bctzl(x) (__builtin_ctzl(x))


#define bpt(x) (__builtin_popcount(x))
#define bptl(x) (__builtin_popcountll(x))
#define PQ priority_queue<pii, vector<pii>, greater<pii> >



using namespace std;



typedef double db;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;
typedef vector<int> vi;
typedef vector<pii> vpi;
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORG(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first 
#define S second 
#define pb push_back 
#define pob pop_back
#define mp make_pair 



template<typename T, typename U> inline void smin(T &a, const U &b) {if(a>b) a=b;}

template<typename T, typename U> inline void smax(T &a, const U &b) {if(a<b) a=b;}



template <class T> inline void read(T &x) {char c, sg=0; while(c=getchar(), (c>'9' || c<'0') && c!='-'); for((c=='-' ? sg=1, c=getchar() : 0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0'; if(sg) x=-x;}

template <class T1, class T2> inline void read(T1 &x1, T2 &x2) {read(x1), read(x2);}

template <class T1, class T2, class T3> inline void read(T1 &x1, T2 &x2, T3 &x3) {read(x1, x2), read(x3);}

template <class T1, class T2, class T3, class T4> inline void read(T1 &x1, T2 &x2, T3 &x3, T4 &x4) {read(x1, x2, x3), read(x4);}

template <class T1, class T2, class T3, class T4, class T5> inline void read(T1 &x1, T2 &x2, T3 &x3, T4 &x4, T5 &x5) {read(x1, x2, x3, x4), read(x5);}



template <class T> inline void print(T x) {if(x<0) {putchar('-'); return print(-x);} if(x<10) {putchar('0'+x); return ;} print(x/10); putchar(x%10+'0');}

template <class T> inline void println(T x) {print(x); putchar('\n');}

template <class T> inline void printsp(T x) {print(x); putchar(' ');}

template <class T1, class T2> inline void print(T1 x1, T2 x2) {printsp(x1), println(x2);}

template <class T1, class T2, class T3> inline void print(T1 x1, T2 x2, T3 x3) {printsp(x1), printsp(x2), println(x3);}

template <class T1, class T2, class T3, class T4> inline void print(T1 x1, T2 x2, T3 x3, T4 x4) {printsp(x1), printsp(x2), printsp(x3), println(x4);}

template <class T1, class T2, class T3, class T4, class T5> inline void print(T1 x1, T2 x2, T3 x3, T4 x4, T5 x5) {printsp(x1), printsp(x2), printsp(x3), printsp(x4), println(x5);}



int power(int a, int b, int m, int ans=1) {

for (; b; b>>=1, a=1LL*a*a%m) if (b&1) ans=1LL*ans*a%m;

return ans;

}



int n,k,t;
int go(int u){

u=u%n;

if(u==0) u=n;

return u;

}
bool check(ll x)
{
    ll a[10]={0};ll c=10,y=x;
    while(y)a[y%c]++,y/=c;
    FOR(i,10)if(a[i]>1)return false;return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);ll m=9876543210;
read(t);while(t--)
{
    ll x,y;read(x);if(x>m){cout<<endl<<endl;;continue;}
    for(int i=1;;i++){y=x*i;if(y>m)break;if(check(y)&&check(i))cout<<y<<" / "<<i<<" = "<<x<<endl;}
    cout<<endl;
}
return 0;
}                     