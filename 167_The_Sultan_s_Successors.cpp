#include<bits/stdc++.h>
#define F first
#define S second
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



int n,t;
int go(int u){

u=u%n;

if(u==0) u=n;

return u;

}
int a[8][8],row[8];

// row[0] = 1 implies that the queen in column 0 is placed in row 1
bool place(int r,int c)
{
    // backtraking is possible due to this
    FORL(i,0,c-1)if(row[i]==r||abs(row[i]-r)==abs(i-c))return false;
    return true;
}
void recur(int c)
{
    if(c==8){int k=0;FOR(i,8)k+=(a[row[i]][i]);n=max(k,n);return;}
    FOR(i,8)if(place(i,c)){row[c]=i;recur(c+1);}
}

int main(){
read(t);while (t--)
{
    FOR(i,8)FOR(j,8)read(a[i][j]);n=0;FOR(i,8)row[i]=-1;
    // FOR(i,8){FOR(j,8)cout<<a[i][j]<<" ";cout<<endl;}
    recur(0);cout<<setw(5)<<setiosflags(ios::right)<<n<<endl;
    // println(n);
}



return 0;
}                     






// #include<iostream>
// #include<iomanip>
// #include<bits/stdc++.h>

// using namespace std;

// int board[8][8];
// bool col[8];
// bool diag1[15];
// bool diag2[15];
// int score, sum;

// void backtracking(int n){
//     if(n==8){
//         cout<<sum<<endl;
//         score=max(score,sum);
//         return;
//     }
    
//     for(int i=0;i<8;i++)
//         if(!col[i] && !diag1[n-i+7] && !diag2[n+i]){
//             col[i]=true;
//             diag1[n-i+7]=true;
//             diag2[n+i]=true;
//             sum+=board[n][i];
            
//             backtracking(n+1);
            
//             col[i]=false;
//             diag1[n-i+7]=false;
//             diag2[n+i]=false;
//             sum-=board[n][i];
//         }
// }

// int main(){
//     int T;
    
//     cin>>T;
    
//     memset(col,false,sizeof(col));
//     memset(diag1,false,sizeof(diag1));
//     memset(diag2,false,sizeof(diag2));
    
//     for(int i=0;i<T;i++){
//         for(int j=0;j<8;j++)
//             for(int k=0;k<8;k++) cin>>board[j][k];
        
//         score=-1;
//         sum=0;
//         backtracking(0);
//         cout<<setw(5)<<setiosflags(ios::right)<<score<<endl;
//     }
    
//     return 0;
// }