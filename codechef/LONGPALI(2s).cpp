#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& str, int size)
{
    int half = size /2;
    for(int i = 0; i < half; ++i)
        if(str[i] != str[size - 1- i])
            return false;
    return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	string word;
	
	cin >> n;
	assert(1 <= n && n <= 5000);
	cin >> word;
	assert(word.size() == n);
	if(isPalindrome(word, n))
	{
	    cout << n << endl;
	    cout << word << endl;
	    return 0;
	}
	int size = n -1;
	for(int i = 0; i < n; ++i)
	{
        string substring = word.substr(i, size);
        if(isPalindrome(substring, size))
    	{
    	    cout << size << endl;
    	    cout << substring << endl;
    	    break;
    	}
    	if(i + size == n)
    	{
    	    i = -1;
    	    size --;
    	}
    	if(size == 0)
    	    break;
	}
	return 0;
}
