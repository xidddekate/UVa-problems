/*
 * UVA Problem: 129 - Krypton Factor
 * Author: ibraaaa
 * AC Time: 0.018s
 */
#include <algorithm>
#include <assert.h>
#include <climits>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <numeric>
#include <limits>
#include <iomanip>
using namespace std;

#define sz(a) ((int)a.size())
#define all(a) a.begin(), a.end()
#define LL long long
#define LD long double
#define vi vector<int>
#define vl vector<LL>
#define vs vector<string>
#define vb vector<bool>
#define ii pair<int, int>
#define vii vector<ii>
#define SET(v, i) (v | (1 << i))
#define TEST(v, i) (v & (1 << i))
#define TOGGLE(v, i) (v ^ (1 << i))

/*
 * Straight forward. DFS, try appending a new
 * letter in alphabetical order and check if
 * the resulting string is hard or easy. Keep
 * track of the number of hard strings found
 * so far and return when the nth hard string
 * is found.
 */

string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool Valid(const string& s) {
  int n = sz(s);
  int l = n / 2;
  for (int i = 1; i <= l; ++i) {
    bool ok = false;
    for (int j = 0; j < i; ++j) {
      if (s[n - 1 - j] != s[n - 1 - j - i]) {
        ok = true;
        break;
      }
    }

    if (!ok) return false;
  }

  return true;
}

bool SolveImpl(int n, int l, int& c, string s) {
  if (!Valid(s))
    return false;

  if (++c == n) {
    for (int i = 0; i < sz(s); ++i) {
      if (i && i % 4 == 0)
        printf(i % 64 == 0? "\n" : " ");

      printf("%c", s[i]);
    }
    printf("\n%d\n", sz(s));
    return true;
  }

  for (int i = 0; i < l; ++i)
    if (SolveImpl(n, l, c, s + letters[i]))
      return true;

  return false;
}

void Solve(int n, int l) {
  int cnt = -1;
  assert(SolveImpl(n, l, cnt, ""));
}

int main() {
  int n, l;
  while (true) {
    scanf("%d %d", &n, &l);
    if (!n && !l)
      break;

    Solve(n, l);
  }
  return 0;
}