#include<bits/stdc++.h>
using namespace std;

int pi[100000009]; 
void find_pi(string s) // pattern
{
	pi[0] = 0;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		int j = pi[i-1];
		while (j > 0&& s[i] != s[j]) {
			j = pi[j-1];
		}
		
		if (s[i]==s[j])j++;
		pi[i] = j;
	}
}

int fun_kmp(string s1, string s2) {
	int n = s1.size(), m = s2.size();
	string s = s1 + '#' + s2;
	find_pi(s);
	
	
}

int main() {
	string s1, s2;
	
	cin >> s1 >> s2;
	
	find_pi(s2);
	
	int n = s1.size(), m = s2.size();
	
	cout << fun_kmp(s1, s2) << endl;
}