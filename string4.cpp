#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
//	cách sử dụng hàm substr
//	new_string = string.substr(x, y);
//	trong đó x là vị trí băt đầu cắt 
//	y là số kí tự cần căt
//	khi không có chỉ số y thì mặc định cắt từ x đến cuối của xâu
	
//	ex:
	string a = "laihopduc";
	string b = a.substr(6, 3);
	cout  << b << endl; //"duc"
	string c = a.substr(3);
	cout << c << endl; // "hopduc"	

//	khi cho 1 chuỗi toàn số , muốn chuyển nó về kiểu số 
//	dùng hàm
//	
//	stoi chuyển chuỗi về dạng số nguyên kiểu <int>
//	stoll chuyển chuỗi về dạng số nguyên kiểu <long long>

	string p = "123455";
	string tmp = "3648723647823";
	int x = stoi(p); cout << x << endl;;
	long long y = stoll(tmp); cout << y << endl;
	
//	muốn làm ngược lại chuyển số thành chuỗi 
//	dùng hàm to_string
	int n = 12345;
	string s = to_string(n);
	cout << s; // "12345"

	return 0;
}
