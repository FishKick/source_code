#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	map <string, int > mp;
	int n; cin >> n;
	vector<string> v;
	
	for (int i= 0; i < n; i++){
		string s; cin >> s;
		mp[s]++;
		v.push_back(s);
	}
	int max_fre  = 0;
	string res;
	for (string x : v){
		if (mp[x] > max_fre){
			max_fre = mp[x];
			res = x;
		}
	}
	cout << res << " " << max_fre << endl;
	return 0;
}
