#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <tuple>
#include <math.h>

#define ll long long
using namespace std;
// pair<datatype1, datatype2> name_pair;
// pair có 2 phần 
//name_pair.first: thành phần thứ nhất
//name_pair.second: thành phần thứ hai

// muốn khai báo giá trị cho first and second thì dùng
//make_pair
//pair<datatype1, datatype2> name_pair = make_pair(value1, value2);
// hàm hoán đổi 2 pair
//pair1.swap(pair2); đổi pair 1 cho pair 2
//tie(); giống trong tuple



int main(){
//	pair<int , int> v;
//	pair<string, int> v2;
//	pair<long long, long long> v3;
//	khi không tạo giá trị ban đầu cho các ele của pair
//	kiểu số -> 0
//	kiểu kí tự or xâu -> null
	
//	cout << v.first << endl;// 0
//	cout << v.second << endl;// 0
	
	pair<int, int> v = make_pair(100, 200);
	//pair<int, int> v = {100, 200}; // cách này dành cho c++ 11 cách này tiện hơn
	
	
	cout << v.first << endl;// 100
	cout << v.second << endl;// 200
	
	
//	swap 
	pair<string, int> v1 = {"duc", 100};
	pair<string, int> v2 = {"minh", 200};
	
	
	v1.swap(v2);
	cout << v1.first << endl; //"minh"
	cout << v1.second << endl;	// 200
	
//	tie();
	
	pair<int, int > tmp = {1, 2};
	int a, b;
	tie(a, b) = tmp;
	cout << a << " " << b << endl; // 1 2
	
	pair <int , pair<int, string>> vx = {1, {9, "duc"}}; // pair chồng pair
	
	// cách xử lí : truy cập vào từng phần tử của pair
	
	int x, y;
	string s;
	
//	tie(x, (y, s)) = vx; or tie(x, tie(y, s)) = vx; đều đưa ra lỗi biên dịch
	
	x = vx.first;
	tie(y, s) = vx.second;
	
	cout << x << ' ' << y << ' ' << s << endl; // 1 9 duc
	
	
	
	return 0;
	
}
