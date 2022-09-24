#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;
//veriaty changes of binary_search
//tìm vị trí đầu tiên của 1 phần tử trong mảng đã đc sắp xếp
//10 3
//1 2 2 3 3 3 3 7 8 9
//0 1 2 '3' 4 5 6 7 8 9 <- pos
//outp: first : 3 && last : 6
// bài này cần O(log(n))
int binary_first_search(int a[], int n, int x){
	int l = 0; int r = n - 1;
	int res = -1;
	while (l <= r){
		int m = (l + r) / 2;
		if (a[m] == x){
			res = m;
//			tìm thêm ở bên trái
			r = m - 1;
		} 
		else if (a[m] > x) r = m - 1;
		else l = m + 1; 
		
	}
	return res;
} 
int binary_last_search(int a[], int n, int x){
	int l = 0; int r = n - 1;
	int res = -1;
	while (l <= r){
		int m = (l + r) / 2;
		if (a[m] == x){
			res = m;
//			tìm thêm ở bên phải
			l = m + 1;
		} 
		else if (a[m] > x) r = m - 1;
		else l = m + 1; 
		
	}
	return res;
} 
int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for (int& it : a) cin >> it;
	if (binary_first_search(a, n, x) < 0){
		cout << "Not foundn\n";
	} 
	else cout << "the first position of " << x << " is " << binary_first_search(a, n, x) << endl; // 3
	if (binary_last_search(a, n, x) < 0){
		cout << "Not foundn\n";
	}  
	else cout << "the last position of " << x << " is " << binary_last_search(a, n, x) << endl; // 6

// muốn tìm số lần xuất hiện của 1 ele trong mảng lấy (last-first)_pos + 1 => O(2log(n))
	
	
	

	return 0;
}
