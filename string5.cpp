#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	
//	cách tách từ trong 1 xâu ra 
//	sử dụng hàm stringstream
	string s = "lai hop duc";
	stringstream ss(s); // cú pháp khai báo hàm
	string tmp; //chuỗi thứ 2 để lưu 
	vector<string> v;
	
	while (ss >> tmp){
		v.push_back(tmp);
	}
	for (string x : v) cout << x << endl;

	return 0;
}
