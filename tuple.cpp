#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

// khai báo tuple 
// truy cập từng ele trong tuple: get<index>(name_tuple); tuple_size
// swap : tuple1.swap(tuple2);
//tie(): ignore and !ignore
//tuple_cat: nối 2 thằng tuple lại 
//số phần tử mới là size(tup1) + size(tup2)
//auto new_tuple = tuple_cat(tup1, tup2);

//tup1 viết trc nên eles đầu tiên sẽ là của tup1, tup2 , ...



int main(){
	//tuple<char, int , float> tup; //khởi tạo bình thường muốn khởi tạo giá trị dùng hàm make_tuple 
//	tup = make_tuple(vl1, vl2, vl3);
	tuple<char, int , float> tup('a', 9, 10.5); // cách khởi tạo giá trị luôn cho nó
//	size của tuple 
	int l = tuple_size<decltype(tup)>::value; //l = 3
	
	
//	vị trí trong tuple được đánh dấu từ 0 -> size-1;
//	muốn truy cập đến dùng
//	get<index>(name_tuple);
	cout <<get<0>(tup); // 'a'
	
//	hoặc có thể gán cho 1 giá trị mới
	
	get<0>(tup) = 'b';
	
	cout << get<0>(tup); // 'b'
	
	
	tuple <char, int , float> tup1('a', 10, 9.5);
	tuple <char, int , float> tup2('b', 9, 10.5);
	tup1.swap(tup2);
	cout << get<0>(tup1); //'b'
	cout << endl;
	
//	khi muốn đẩy các giá trị trong tuple ra ngoài các biến thông thường
//  dùng hàm tie()
	tuple <char, int , float> tup3('c', 1, 2.5);
	
	char ch_val;
	int i_val;
	float f_val;
	
//	tie(ch_val, i_val, f_val) = tup3;
//	cout << ch_val << " " << i_val << " " << f_val << endl;// 'c' 1 2.5
	
//	khi muốn bỏ qua ele nào đó trong tuple dùng ignore cho vị trí đấy
	tie(ch_val, ignore, f_val) = tup3;
	cout << ch_val << ' ' << f_val; //'c' 2.5
	cout << endl;
	auto tup4 = tuple_cat(tup2, tup3);
	cout << get<0>(tup4) << " " << get<1>(tup4) << " " << get<2>(tup4) << " " << get<3>(tup4);
	cout << " " << get<4>(tup4) << " " << get<5>(tup4) << endl;
	

	return 0;
}

