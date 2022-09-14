#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;


// note : truoc getline phai co cin.ignore(); khong thi se bi tran buffer

int main(){
	int n; cin >> n;
	cin.ignore(); // mac dinh la xoa 1 ki tu trong bo dem ban phim
	
	// co the dung cin.ignore(number); vs 'number' la so ki tu can xoa
	string s, st; 
	getline(cin, s); // lay ca dau cach 
	cout << s;
	cin >> st; // khong lay dau cach
	cout << st;
	return 0;
}
 