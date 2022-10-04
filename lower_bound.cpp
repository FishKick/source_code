#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;
//Phương thức Lower_bound () trong C ++ được sử dụng để trả về một trình lặp trỏ 
//đến phần tử "đầu tiên" trong phạm vi [đầu tiên, cuối cùng) có giá trị "không nhỏ hơn val". 
//Điều này có nghĩa là hàm trả về một trình lặp trỏ đến số nhỏ nhất tiếp theo chỉ "lớn hơn hoặc bằng số đó". 
//Nếu có nhiều giá trị bằng val, thì low_bound () trả về trình lặp của giá trị đó "đầu tiên".


//Các phần tử trong phạm vi phải đã được sắp xếp hoặc ít nhất được phân vùng theo val. 

//Syntax 1: 
//ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, const T& val); 
//Syntax 2: 
//ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, const T& val, Compare comp); 

//Input: 10 20 30 40 50
//Output: lower_bound for element 30 at index 2
//
//Input: 10 20 30 40 50
//Output: lower_bound for element 35 at index 3
//
//Input: 10 20 30 40 50
//Output: lower_bound for element 55 at index 5 (Basically, 55 is not present, so it returns "end()" iterator)
//
//Input: 10 20 30 30 30 40 50
//Output: lower_bound for element 30 at index 2

//10 3
//1 2 2 3 3 3 3 7 8 9
//lower_bound():
//output: pos 3 
//		value 3
//upper_bound():
//output: pos : 7
//		value : 7


//upper_bound() i xì lower_bound() khác mỗi cái trả về it của thằng lớn hơn hẳn value
int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for (int& x : a) cin >> x;
	auto it = lower_bound(a, a+n, x); // return iterator 
	cout << "pos : "  /*index*/ << it - a << " value " << *it << endl;  //pos 3   value 3
	auto it1 = upper_bound(a, a+ n, x);
		cout << "pos : "  /*index*/ << it1 - a << " value " << *it1 << endl; //pos : 7  value : 7	
	
										
	return 0;
}
