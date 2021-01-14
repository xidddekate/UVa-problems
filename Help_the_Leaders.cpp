/*
author: Igor Racca
RA:  511382
judge: UVa
problem: 10475
*/

#include <algorithm> 
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool compare(string const & a, string const & b) {
	if(a.length() > b.length()) return true;
	if(a.length() < b.length()) return false;
	
	if(a < b) return true;
	else return false;
}

void printPossibleSets(vector<string> &T, vector<vector<string> > &P, vector<string> &out, int sel, int ini, int t, int s) {
	if(sel == s) {
		for(int i=0; i<P.size(); i++) {
			int nP = 0;
			for(int j=0; j<2; j++) {
				for(int k=0; k<out.size(); k++) {
					if(P[i][j] == out[k])
					nP++;
				}
			}
			if(nP == 2) {
				return;
			}
		}
		for(int i=0; i<out.size(); i++) {
			string cap_out = out[i];
			transform(cap_out.begin(), cap_out.end(), cap_out.begin(), ::toupper);			
			cout << cap_out;
			if(i!=out.size() -1) {
				cout << " ";
			}	
		}
		cout << "\n";
	} else {
		for(int i=ini; i<t; i++) {
			out.push_back(T[i]);
			printPossibleSets(T, P, out, sel+1, i+1, t, s);
			out.pop_back();
		}
	}
}

int main() {
	int n;
	int t, p, s;
	vector<string> T, out;
	vector<vector<string> > P;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> t;
		cin >> p;
		cin >> s;
		
		//IN T
		for(int j=0; j<t; j++) {
			string topic;
			cin >> topic;
			T.push_back(topic);
		}
		
		sort(T.begin(), T.end(), compare);		
//		for(int j=0; j<t; j++) {
//			cout << T[j] << "\n";
//		}
//		cout << "\n";cout << "\n";

		//IN P
		for(int j=0; j<p; j++) {
			vector<string> row;
			for(int k=0; k<2; k++) {
				string topic;
				cin >> topic;
				row.push_back(topic);
			}
			P.push_back(row);
			sort(P[j].begin(), P[j].end(), compare);
		}
	
//		for(int j=0; j<p; j++) {
//			for(int k=0; k<s; k++) {
//				cout <<	P[j][k] << " ";
//			}
//			cout << "\n";
//		}
//		
//		for(int j=0; j<p; j++) {
//			cout << (P[j] == T) << "\n";	
//		}
		
		//OUT
		cout << "Set " << i+1 << ":\n";
		printPossibleSets(T, P, out, 0, 0, t, s);
		cout << "\n";
		
		T.clear();
		for(int j=0; j<p; j++) {
			P[j].clear();	
		} 
		P.clear();
		out.clear();
		t++;
	} cout << "\n";
	
	return 0;
}






// Possible implementation


// First version
// template<class InputIt, class OutputIt, class UnaryOperation>
// OutputIt transform(InputIt first1, InputIt last1, OutputIt d_first, 
//                    UnaryOperation unary_op)
// {
//     while (first1 != last1) {
//         *d_first++ = unary_op(*first1++);
//     }
//     return d_first;
// }

// Second version
// template<class InputIt1, class InputIt2, 
//          class OutputIt, class BinaryOperation>
// OutputIt transform(InputIt1 first1, InputIt1 last1, InputIt2 first2, 
//                    OutputIt d_first, BinaryOperation binary_op)
// {
//     while (first1 != last1) {
//         *d_first++ = binary_op(*first1++, *first2++);
//     }
//     return d_first;
// }



// eg.

// #include <algorithm>
// #include <cctype>
// #include <iostream>
// #include <string>
// #include <vector>
 
// int main()
// {
//     std::string s("hello");
//     std::transform(s.begin(), s.end(), s.begin(),
//                    [](unsigned char c) -> unsigned char { return std::toupper(c); });
 
//     std::vector<std::size_t> ordinals;
//     std::transform(s.begin(), s.end(), std::back_inserter(ordinals),
//                    [](unsigned char c) -> std::size_t { return c; });
 
//     std::cout << s << ':';
//     for (auto ord : ordinals) {
//        std::cout << ' ' << ord;
//     }
 
//     std::transform(ordinals.cbegin(), ordinals.cend(), ordinals.cbegin(),
//                    ordinals.begin(), std::plus<>{});
 
//     std::cout << '\n';
//     for (auto ord : ordinals) {
//        std::cout << ord << ' ';
//     }
//     std::cout << '\n';
// }
