#include <bits/stdc++.h>
#include <math.h>


#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int cnt = 0;
	for (int i = 0; i < s.length(); i++){
		cout << s[i] << endl;
		cnt++;
	}
	for (char x : s) {
		cout << x;
		cnt++;
	}
	cout << "\n";
	vector<char> v;
	for (int i = 0; i < s.length(); i++){
		v.push_back(s[i]);
	}
	for (char x : v) cout << x;
	

	return 0;
}
