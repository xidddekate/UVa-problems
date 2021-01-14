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
template <class Container>
void split2(const std::string& str, Container& cont, char delim = ' ')
{
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim)) {
        cont.push_back(token);
    }
}


// void split_string_with_delim(std::string input, std::string delimiter, std::vector<int> &output){
//     ll pos;
//     while ((pos = input.find(delimiter)) != std::string::npos) {
//         std::string token = input.substr(0, pos);
//         output.push_back(std::stoi(token));
//         input.erase(0, pos + delimiter.length());
//     }
//     output.push_back(std::stoi(input));
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);ll x,sum=0; vector<vector<int> > v( 3 , vector<int> (3));
    // vector<string> y;
    // string z;cin>>z;
    // split2(z,y);
//     std::istringstream ss(z);
// int token;

// while(std::getline(ss, token, ' ')) {
//     // std::cout << token << '\n';
//     y.pb(token);}
// std::string input = "abc,def,ghi";
// std::istringstream ss(input);
// std::string token;

// while(std::getline(ss, token, ',')) {
//     std::cout << token << '\n';}
// vi ot;
// split_string_with_delim(z," ",ot);
// for(auto i:ot)cout<<i<<endl;

// std::vector<int> result;
// std::istringstream iss(z);
// for(int n; iss >> n; ) 
//     result.push_back(n);
//     cout<<result.size()<<endl;
//     for(auto i:result)cout<<i<<endl;
// while(cin>>x)
// {
//     // cout<<k<<" "<<x <<endl;
//     sum+=x;v[k/3][k%3]=x;
//     if(k==8)
//     {
//         // FOR(q,3){FOR(j,3)cout<<v[q][j]<<" ";cout<<endl;}
//         int a[3],b[3];a[0]=0,a[1]=1,a[2]=2;int m=INT_MAX;
//         // cout<<"xvxc"<<endl;
//         do{
//             if(m>sum-v[0][a[0]]-v[1][a[1]]-v[2][a[2]])
//             {m=sum-v[0][a[0]]-v[1][a[1]]-v[2][a[2]];
//             FOR(i,3)b[i]=a[i];}
//         }while(next_permutation(a,a+3));string s="";
//         for(auto i:b)if(i==0)s+="B";else if(i==1)s+="G";else s+="C";
//         cout<<s<<" "<<m<<endl;sum=0;k=0;v.clear();continue;
//     }
//     k++;
// }

char s1[5];
// string s1;
sprintf(s1,"%05d",n);
printf(s1);
return 0;
}                     