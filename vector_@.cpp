#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

//vector<kieu du lieu> ten_vector

//push_back() : day 1 phan tu vao cuoi day cua 1 vector
//size() : kich thuoc vector
// truy cap ca phan tu trong vecto thong qua index
// dung for each 
// dung toan tu iterator, dung auto



int main(){
	int n; cin >> n;
//	khai bao vector nma da co san n phan tu v[n]
	vector<int> v(n); // tuong duong 
//	int a[n];
	for (int i = 0; i < v.size(); i++){
		cin >> v[i];
	}
	
	// neu lam bth thi sẽ ntn 
	int a[n];
	vector<int> vt;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		vt.push_back(a[i]); 
	}
	for (int x : v) cout << x << endl;
	for (int x : vt) cout << x << endl;
//	khoi tao gia tri cho all phan tu trong vecto 
	vector<int> v1(n, 100);
	v1.push_back(20);
	
	for (int x : v1) cout << x << endl;

	return 0;
}
