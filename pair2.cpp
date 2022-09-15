#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

//operators(=, ==, !=, >=, <=) in Pair

//nếu toán  tử ss đúng =< trả về 1 , ngược lại trả về 0
// chỉ so sánh phần tử đầu tiên , nếu nó bằng nhau thì so sánh tiếp đến các ptu tiếp theo


int main(){
	
	pair<int, int> v1(2, 10);
	pair<int, int> v2(2, 20);
	cout << (v2 > v1) << endl; // 1
	
	pair<int, int> v3;
	v3 = make_pair(v1.first+v2.first, v1.second+v2.second);
	
	cout << v3.first << " " << v3.second<< endl;
	return 0;
}
