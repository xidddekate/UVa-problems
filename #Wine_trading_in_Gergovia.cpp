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

// int ans, a[100001];
// void buy(int ind, int n)
// {
//     FORG(i, ind - 1, 0)
//     {
//         if (a[i] < 0)
//         {
//             if (a[i] + a[ind] <= 0)
//             {
//                 ans += (a[ind] * (ind - i));
//                 a[i] += a[ind];a[ind] = 0;
//                 return;
//             }
//             else
//             {
//                 ans += (-a[i] * (ind - i));
//                 a[ind] += a[i];a[i] = 0;
//             }
//         }
//         // cout << ans << " " << a[ind] << endl;
//     }
//     FORL(i, ind + 1, n)
//     {
//         if (a[i] < 0)
//         {
//             if (a[i] + a[ind] <= 0)
//             {
//                 ans += (a[ind] * (i - ind));
//                 a[i] += a[ind];a[ind] = 0;
//                 return;
//             }
//             else
//             {
//                 ans += (-a[i] * (i - ind));
//                 a[ind] += a[i];a[i] = 0;
//             }
//         }
//         // cout << ans << " " << a[ind] << endl;
//     }
//     return;
// }
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     while (cin >> n, n)
//     {
//         ans = 0;
//         FOR(i, n)
//             cin >> a[i];
//         FOR(i, n)
//         {
//             if (a[i] > 0)
//                 buy(i, n);
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }






#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(scanf("%d", &n) == 1 && n) {
        long long sum = 0, ans = 0, x;
        while(n--) {
            scanf("%lld", &x);
            sum += x;
            if(sum < 0)
                ans -= sum;
            else
                ans += sum;
            // cout<<ans<<" "<<sum<<endl;
        }
        printf("%lld\n", ans);
    }
    return 0;
}