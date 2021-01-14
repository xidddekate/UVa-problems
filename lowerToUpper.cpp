#include <bits/stdc++.h>
using namespace std;
int main()
{
   while(true){
    string s;cin>>s;for (int i = 0; i < s.size(); i++)
    {
        if(s[i]-0>=97&&s[i]-0<123)s[i]=s[i]-32;
    }
    cout<<s<<endl;
    // cout<<'A'-0<<endl;
    }
    return 0;
}