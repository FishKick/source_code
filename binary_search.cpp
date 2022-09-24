#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
// thuật toán tìm kiếm 
#define ll long long
using namespace std;
// Linear search O(n): thuật toán tìm kiếm tuyến tính 
//10 3
//1 2 8 9 0 7 5 6 3 4 
//tìm xem 3 có nằm trong mảng này khôgn
bool linear_search(int a[], int n, int x){
	for (int i = 0; i < n;i++){
		if( x == a[i]) return true;
	}
	return false;
}
//Binary search O(log(n)): thuật toán tìm kiếm nhị phân
//princible: eles trong mảng phải được sắp xếp 
//10 3
//1 2 3 4 5 6 7 8 9 10 
//out p : found!
//cách 1 : khôg dùng đệ quy
bool bs(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l <= r){
		int m = (l + r) / 2;
		if (a[m] == x) return true;
		else if (a[m] > x) {
			r = m - 1;
		}
		else l = m + 1;
	}
	return false;
}
//cách 2 : dùg đệ quy(recusion)
bool Binary_search(int a[], int l, int r, int x){
	if (l > r) return false;
	int m = (l+r) / 2;
	if (a[m] == x) return true;
	else if ( a[m] > x) return Binary_search(a, l, m - 1, x);
	else return Binary_search(a, m + 1, r, x);
}


int main(){
	int n,x ; cin >> n >> x;
	int a[n];
	vector<int> v(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
		v.push_back(a[i]);
	}
//	if (bs(a, n, x)) cout << "found\n";
//	if (binary_search(a, 0, n - 1, x)) cout << "found\n";
//	if (linear_search(a, n, x)) cout << "found\n";
//	else cout << "!found\n";
	
//	cách 3: dùng hàm có sẵn trong thư viện STL	
//	cout <<binary_search(a, a+n, x) << endl; // return 1 or 0;
//	binary_search(thằng đứng đầu tiên trong mảng: it.begin(), thằng đứng sau thằng cuối: it.end(), số cần tìm x) 
	if (binary_search(v.begin(), v.end(), x)) cout << "found\n";
	else cout << "!found\n";
	return 0;
}
