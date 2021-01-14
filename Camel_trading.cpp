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
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string s;cin>>s;vi add,mul;int y=0,m=1;char last='+';FOR(i,s.size()){if(s[i]=='+'){add.push_back(m*y);m=1;y=0;last='+';}else if(s[i]=='*'){m*=y;y=0;last='*';}else y*=10,y+=(s[i]-'0');}int adds=0;if(last=='*')add.push_back(m*y);else add.push_back(y);FOR(i,add.size()){adds+=add[i];/*cout<<add[i]<<" ";*/}/*cout<<endl<<adds<<endl;*/


//         m=0,y=0;
//         FOR(i,s.size()){if(s[i]=='*'){mul.push_back(m+y);m=0;y=0;last='*';}else if(s[i]=='+'){m+=y;y=0;last='+';}else y*=10,y+=(s[i]-'0');}int muls=1;if(last=='+')mul.push_back(m+y);else mul.push_back(y);FOR(i,mul.size()){muls*=mul[i];/*cout<<mul[i]<<" ";*/}/*cout<<endl<<muls<<endl;*/


//         cout<<"The maximum and minimum are "<<muls<<" and "<<adds<<"."<<endl;
//     }
//     return 0;
// }















// exact solution
/*10700 Camel trading*/

#include <stdio.h>

int main(){
	
	int casos;
	scanf("%d\n", &casos);
	while(casos--){
		
		long long cad[100];
		char sig[100];
		long long aux[100];
		int i, max=0, min=0;

		for ( i = 0; i < 100; ++i)
		{
			cad[i]= 0;
			aux[i]=0;
		}

		for ( i = 0; i < 100; ++i)
		{
			scanf("%lld", &cad[i]);
			scanf("%c", &sig[i]);
		
			if(sig[i]=='\n'){
				break;
			}
			
		}
		
		for (i = 0; i < 100; ++i)
		{
			aux[i]=cad[i];
		}

		for (i = 0; i < 100; ++i)
		{
			if(sig[i]=='+'){
				aux[i+1]=aux[i]+aux[i+1];
				aux[i]=0;
			}

			if(sig[i]=='*'){
				cad[i+1]=cad[i]*cad[i+1];
				cad[i]=0;
			}
		}
		long long tots=1;
		long long totm=0;

		for (i = 0; i < 100; ++i)
		{
			if(aux[i]!=0){
				tots *= aux[i];
			}

			totm += cad[i];
		}

		printf("The maximum and minimum are %lld and %lld.\n", tots, totm );
	
	}

	return 0;
}
