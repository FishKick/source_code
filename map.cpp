#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

//kiểu dữ liệu map 
//syntax: map <datatype1, datatype2> map_name;
//				key			value
//key_map ordered: tăng dần theo key
//map.insert
//map.size
//map.count 
//map.find
//map.erase

//mini_test : đếm số lần xuất hiện của các phần tử trong mảng 
//đính kèmm theo tần suất của nó
//8
//1 1 2 1 3 1 5 -4
//outp:
//-4 1
//1 4
//2 1
//3 1 
//5 1


int main(){
	
	map <int, int> mp;
//	cách chèn key và value vào map
//	m[key] = value;
	mp[1] = 200;
	mp[2] = 300;	
//	or dùng insert
	mp.insert({3, 400});
	mp.insert({4, 500});
//	xác định kích thước của map dùng hàm size
	cout << mp.size() << endl; //4
//	tương tự set thì các ele_KEY trong map là duy nhất <=> không chứa các
//	phần tử giống nhau
//	mp[1] = 300;
	
	cout << mp.size()  << endl; // 4
	
// cách truy nhập vào từng key và value của map 
// dùng pair
	for (pair <int, int> x : mp) cout << x.first << " " << x.second << endl;
//	1 300
//	2 300
//	3 400
//	4 500

	// dùng iterator cũng được cho nhanh
	for (auto it : mp)
	cout << it.first /* it->first */<<' ' << it.second /* it->second */ << endl;
	// cách dùng sơ khai của iterator
	for (map <int, int>::iterator it = mp.begin(); it != mp.end(); it++){
		cout << (*it).first /* it->first */ << " " << (*it).second /* it->second */ << endl; 
	}
//	tìm kiếm phần tử ở trong map(only key_search)
//	dùng hàm count(key)
	cout << mp.count(1) << endl; // return 1 => found 
	cout << mp.count(5) << endl; // return 0 => not found
	
//	dùng find() <=> dùng iterator để trỏ vào key 
//	dùng mp.end(), mp.begin()
// 	xóa phần tử trong map
	mp.erase(1); //xóa cả key(1) và value tại key = 1 
	for (auto it : mp)
	cout << it.first <<' ' << it.second << endl;
	
//	dùng it để xóa 
	mp.erase (mp.begin(), mp.find(3)); //xóa từ mp[1] đên mp[2]
	for (auto it : mp)
	cout << it.first <<' ' << it.second << endl;
	
	map <int, int> mapp;
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		mapp[x]++;
	}
	for (auto x : mapp){
		cout << x.first << " " << x.second<< endl;
	}
	
	
//	làm thêm muốn in ra theo thứ tự xuất hiện của eles trong mảng
	map <int ,int > mp1;
	int n1; cin >> n1;
	int a[n1];
	for (int& x : a){
		cin >> x;
		mp1[x]++;
	}
	
	for (int x : a){
		if (mp1[x] != 0){
			cout << x << " " <<mp1[x] << endl;
			mp1[x] = 0;		
		}
	}
//	1 4
//	2 1
//	3 1
//	5 1
//	-4 1
	
	
	

	return 0;
}
