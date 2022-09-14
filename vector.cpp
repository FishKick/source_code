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
	
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << v.size() << endl;
	
	v.push_back(40);
	cout << v.size() << endl;
	
	cout << "phan tu dau tien trong vector : " << v[0] <<endl;
	cout << "phan tu cuoi cung trong vector : " << v[v.size()-1] << endl;
	cout << "phan tu cuoi cung trong vector : " << v.back() << endl;
	
//	for(int i = 0; i < v.size(); i++){
//		cout << v[i] << endl;
//	}
////	
//	for (int x : v){
//		cout << x << endl;
//	}
//	
//	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
//		cout << *it << endl;
//	}
//	for (auto it = v.begin(); it != v.end(); it++){
//		cout << *it << endl;
//	}
	
	cout << v[2] <<endl;
	cout << *(v.begin()+2) << endl;
	return 0;
}
