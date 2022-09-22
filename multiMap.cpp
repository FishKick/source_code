#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;
//multi Map lưu được các giá trị khác nhau của key

int main(){
	multimap<int, int> mm;
//	cách truyền key và value "sai" trong multiMap
//	mm[1] = 100;
//	mm[2] = 200;
//	mm[1] = 300;
//	cách truyền đúng
	mm.insert({1, 100});
	mm.insert({2, 200});
	mm.insert({1, 300});
	for (auto it : mm){
		cout << it.first << " " << it.second << endl;
	}
//	1 100
//	1 300
//	2 200
	
	cout << mm.count(1) << endl; // 2 
//	dùng hàm erase xóa thì cẩn thận , nó xóa tất cả những thằng có key 
//	giống nhau
	
//	unordered_map giống unordered_set

	return 0;
}
