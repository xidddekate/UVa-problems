#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int prev1 = 2, prev2 = 1;
    int curr=3;
    if (n == 0)
        cout << 0;

    else if (n < 2)
        cout << 1 << endl;

    else if (n == 2)
        cout << 2 << endl;

    for (int i = 3; i <= n; ++i)
     {
         curr=prev1+prev2;
         prev2=prev1;
         prev1=curr;
     } 

    cout << curr << endl;
    return 0;
}