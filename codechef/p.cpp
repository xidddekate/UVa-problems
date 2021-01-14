#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x=11;
    while(x--)
    {
        cout<<x<<"      "<<(x^1)<<"  ";
        cout<<"  "<<(x^2)<<"  ";
        cout<<"  "<<(x^3)<<"  ";
        cout<<"  "<<(x^4)<<"  ";
        cout<<"  "<<(x^5)<<"  ";
        cout<<"  "<<(x^6)<<"  ";
        cout<<"  "<<(x^7)<<"  ";
        cout<<"  "<<(x^8)<<"  ";
        cout<<"  "<<(x^9)<<"  ";
        cout<<"  "<<(x^10)<<" ";
        cout<<endl;
// cout<<pow(2,20)<<endl;
    }

    return 0;
}