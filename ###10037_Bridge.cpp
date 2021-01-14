// solution:-
// 1. Getting 1,2 or 3 people to the other side has only one optimal strategy.
// 2. If we have 4 or more people, we can break the problem down into the problems of getting each 2 people to the other side.
// 3. Getting 2 people from four or more to the other side can have one of two optimal strategies.
// Let our people be A and B be our fastest 2, with A being the fastest, and let C and D be our two slowest, with D being the slowest.
// Strategy 1:
// A & C go: Takes C time
// A returns: Takes A time
// A & D go: Takes D time
// A returns: Takes A time
// Total time = 2A + D + C

// Strategy 2:
// A & B go: Takes B time
// A returns: Takes A time
// C & D go: Takes D time
// B returns: Takes B time
// Total time = A + 2B + D

// Hence, if Strategy 1 time < Strategy 2 time then
// 2A + D + C < A + 2B + D.
// Therefore, A + C < 2B
// And if this doesn’t hold, then Strategy 2 time <= Strategy 1 time

// We sort our entries and then move from the back, taking the slowest two every time, until we’re left with 1,2 or 3 people.

// ?
// C++ source code


#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <time.h>
#include <fstream>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define E 2.71828182845904523536
using namespace std;
 
int main()
{
    int N,n;
 
    cin >> N;
 
    for (int i=0; i<N; i++)
    {
        deque<int> LeftSide, RightSide;
 
        cin >> n;
        int T;
        for (int i=0; i<n; i++)
            {
                cin >> T;
                LeftSide.push_back(T);
            }
 
        sort(LeftSide.begin(), LeftSide.end());
        int TotalTime = 0;
        stringstream fout;
        while(1)
        {
 
            int A = LeftSide[0];
 
            if (LeftSide.size() == 1) {fout << A; TotalTime += A; break;}
 
            int B = LeftSide[1];
            if (LeftSide.size() == 2)
            {
                fout << A << " " << B; TotalTime += B;break;
            }
 
            if (LeftSide.size() == 3)
            {
                fout << A << " " <<B << endl << A << endl << A << " " <<  LeftSide[2] ;
                TotalTime += B + A +  LeftSide[2];
                break;
            }
            int Y, Z;
 
            Z = LeftSide.back();
            LeftSide.pop_back();
            Y = LeftSide.back();
            LeftSide.pop_back();
            if (A + Y < 2*B)
            {
                fout << A << " " << Y<< endl << A << endl << A << " " << Z << endl << A << endl;
                TotalTime += Z + 2*A + Y;
            }
            else
            {
                fout << A << " " << B << endl << A << endl << Y << " " << Z << endl << B << endl;
                TotalTime += 2*B + A + Z;
            }
        }
 
        cout<< TotalTime << endl << fout.str() << endl;
 
        if (i != N-1) cout << endl ;
    }
    return 0;
}