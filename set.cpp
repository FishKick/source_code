#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

//set dùng để lưu các phần tử khác nhau trong mảng, ele đó tự động được sắp xếp mặc định là tăng dần
// muốn sắp xếp giảm dần : set<datatype, greater<datatype>> setname;
// được sử dụng để lưu trữ các giá trị trong một tập hợp theo thứ tự giảm dần.

//nếu là string or char thì dùng ascii để ss


//syntax: set<datatype> setname;

//setname.insert(): muốn đẩy giá trị vào trong mảng set


//toán tử iterator: con trỏ đặc biệt 



int main(){
	set <int> s;
	s.insert(300);
	s.insert(200);
	s.insert(100);
	s.insert(100);
	s.insert(100);
	
	cout << s.size() << endl; // 3	
	for (auto& x : s) cout << x << " "; // 100 200 300
	
	cout << endl;
	
	set<int , greater<int>> s1;
	
	s1.insert(300);
	s1.insert(200);
	s1.insert(100);
	s1.insert(200);
	s1.insert(100);
	
	
	for (auto& x : s1) cout << x << ' '; // 300 200 100
	
	cout << endl;
//toán tử gán 
//	gán s1 cho s2
	set<int, greater<int>> s2(s1.begin(), s1.end());
	
	for (auto itr = s2.begin(); itr != s2.end(); itr++){
		cout << *itr << ' '; // 300 200 100
	}

// hàm erase xóa những phần tử trong mảng set
	s2.erase(s2.begin(), s2.find(200));
	cout << s2.erase(300) << endl;
	for (auto& x : s2) cout << x << ' ';
	
	
	
	

	return 0;
}
