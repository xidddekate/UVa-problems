// #include <bits/stdc++.h>
// using namespace std;
// #define max(a, b) (a < b ? b : a) 
// #define min(a, b) ((a > b) ? b : a)
// #define mod 1000000007
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
// #define FORG(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
// #define INF 1000000000000000003
// typedef long long int ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define F first 
// #define S second 
// #define PB push_back 
// #define POB pop_back
// #define MP make_pair 
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0); 
//     int n;float dx,dy,gx,gy;while (cin>>n>>gx>>gy>>dx>>dy)
//     {
//         pair<float,float>a[n];bool f=0;FOR(i,n){cin>>a[i].F>>a[i].S;float x=((dx-a[i].F)*(dx-a[i].F)+(dy-a[i].S)*(dy-a[i].S))/((gx-a[i].F)*(gx-a[i].F)+(gy-a[i].S)*(gy-a[i].S));if(x>=4&&f==0){f=1;printf("The gopher can escape through the hole at (%.3f,%.3f).\n",a[i].F,a[i].S);}}if(!f)cout<<"The gopher cannot escape."<<endl;
//     }
    
//     return 0;
// }



//AC Solution
#include <stdio.h>

int main() {
    int n;
    double x1,y1, x2, y2;
    while(scanf("%d %lf %lf %lf %lf", &n, &x1, &y1, &x2, &y2) == 5) {
        int find = 0;
        double x, y, ansx, ansy;
        while(n--) {
            scanf("%lf %lf", &x, &y);
            if(find)
                continue;
            if(4*((x1-x)*(x1-x)+(y1-y)*(y1-y)) <= (x2-x)*(x2-x)+(y2-y)*(y2-y)) {
                find = 1;
                ansx = x;
                ansy = y;
            }
        }
        if(find) {
            printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n", ansx, ansy);
        } else {
            puts("The gopher cannot escape.");
        }
    }
    return 0;
}