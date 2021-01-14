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
//     int a, b, c, d, e, f;
//     while (cin >> a >> b >> c >> d >> e >> f, a || b || c || d || e || f)
//     {
//         int s = 0;
//         if (f)
//             s += f;
//         if (e)
//         {
//             if (a > 0)
//                 a -= 11 * e, s += e;
//             else
//                 s += e;
//         }
//         if (d)
//         {
//             if (b > 0)
//                 b -= 5 * d, s += d;
//             else
//                 s += d;
//         }
//         if (b < 0 && a > 0)
//             a += b * 4;
//         if (c)
//             s += c%4?c/4+1:c/4;
//         // cout << (c/4) << endl;
//         ;
//         if (c % 4 != 0 && b > 0)
//         {
//             if (c % 4 == 1)
//                 b -= 5, a -= 7;
//             else if (c % 4 == 2)
//                 a -= 6, b -= 3;
//             else
//                 a -= 5, b -= 1;
//         }
//         else if (c % 4 != 0 && a > 0)
//         {
//             if (c % 4 == 1)
//                 a -= 27;
//             else if (c % 4 == 2)
//                 a -= 18;
//             else
//                 a -= 9;
//         }
//         if (b < 0 && a > 0)
//             a += b * 4;
//         if (a > 0)
//             s += a/36?a/36+1:a/36;
//         cout << s << endl;
//     }
//     return 0;
// }



// AC SOLUTION
// AC SOLUTION
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{  
    int b1, b2, b3, b4, b5, b6;
    while (cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6, 
           b1 + b2 + b3 + b4 + b5 + b6 > 0)
    {
        int parcels = 0;
        // b6 boxes.
        parcels += b6;
        // b5 boxes each with 11 1x1.
        parcels += b5;
        b1 -= b5 * 11;
        // b4 boxes each with 5 2x2.
        parcels += b4;
        b2 -= b4 * 5;
        // (b3 + 3) / 4 boxes, then check the last parcel.
        parcels += (b3 + 3) / 4;
        if (b3 % 4 == 1)
        {
            b2 -= 5;
            b1 -= 7;
        }
        else if (b3 % 4 == 2)
        {
            b2 -= 3;
            b1 -= 6;
        }
        else if (b3 % 4 == 3)
        {
            b2 -= 1;
            b1 -= 5;
        }
        // Now handle b2.
        if (b2 > 0)
        {
            parcels += (b2 + 8) / 9;
            b2 -= 9 * ((b2 + 8) / 9);
        }
        // Lastly, handle b1.
        if (b2 < 0)
            b1 += b2 * 4;
        if (b1 > 0)
            parcels += (b1 + 35) / 36;

        cout << parcels << endl;
    }
    return 0;
}