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



// int main(){
// while(cin>>n>>k,n&&k){
//     int b[k];vi ans[n];pii a[n];bool f=1;
//     FOR(i,n){read(a[i].F);a[i].S=i+1;}FOR(i,k)read(b[i]);sort(a,a+n);FORG(i,n-1,0){
//         ans[i].pb(a[i].S);int x=a[i].F;
//         for(int j=0;j<k&&x;j++)if(b[j]>0){b[j]--;x--;ans[i].pb(j+1);}
//         if(x){f=0;break;}
//     }
//     if(f){cout<<1<<endl;;sort(ans,ans+n);FOR(i,n){for(int j=1;j<ans[i].size();j++)cout<<ans[i][j]<<" ";cout<<endl;}}
//     else cout<<0<<endl;
//     // cout<<endl;
// }

// return 0;
// }                     



#include <iostream>
#include <vector>
#include <string.h>

#define maxmembers 100

using namespace std;

unsigned int M, N; //number of teams and number of tables
vector<int> team;
vector<int> table;
vector<vector<int> > sol;
bool available[maxmembers];
int maxteamsize;

//O(N) table search
int maxtindex()
{
    int index=-1;
    for(unsigned int i=0;i<table.size();i++)
    {
        if (available[i])
        {
            index=i;
            break;
        }
    }
    if (index==-1) return -1;
    for(unsigned int i=0;i<table.size();i++) if ((table[i]>table[index]) && (available[i])) index=i;
    return index;
}

bool solve()
{
    int maxt;
    unsigned int i=0;
    if (maxteamsize>N) return false;
    memset(available,true,sizeof(available));
    while((i<M) && (team[i]>0))
    {
        maxt = maxtindex();
        if (maxt==-1) return false;
        if (table[maxt]<1) return false;
        available[maxt]=false;
        team[i]--;
        table[maxt]--;
        if (i<sol.size())
        {
            vector<int> v=sol[i];
            v.push_back(maxt+1);
            sol[i]=v;
        }
        else
        {
            vector<int> v;
            v.push_back(maxt+1);
            sol.push_back(v);
        }
        if (team[i]==0)
        {
            i++;
            memset(available,true,sizeof(available));
        }
    }
    return true;
}

void printsol()
{
    cout << "1" << endl;
    for(unsigned int i=0;i<sol.size();i++)
    {
        vector<int> v = sol[i];
        for(unsigned int j=0;j<v.size();j++)
        {
            cout << v[j];
            if (j!=v.size()-1) cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int in;
    while(1)
    {
        cin >> M >> N;
        if ((M==0) && (N==0)) break;
        team.clear();
        table.clear();
        sol.clear();
        maxteamsize=-1;
        for(unsigned int z=1;z<=M;z++)
        {
            cin >> in;
            if (in>maxteamsize) maxteamsize=in;
            team.push_back(in);
        }
        for(unsigned int z=1;z<=N;z++)
        {
            cin >> in;
            table.push_back(in);
        }
        if (solve()) printsol();
        else cout << "0" << endl;
    }
    return 0;
}
