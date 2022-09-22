#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;
// multi set chả khác cái cc j set cả chỉ khác ở chỗ nó lưu nhũng ptu giống nhau

// cũng dùng các hàm insert find count erase size

// cho dãy gồm n phần tử và số dương k, đối với mỗi dãy con liên tiếp có chiều dài k
// chỉ in ra phần tử lớn nhất trog dãy con đó
// 10 3
// 1 2 3 1 4 5 1 8 9 10
//outP: 3 3 4 5 5 8 9 10

int main(){

	int n, k; cin >> n >> k;
	int a[n];
	multiset<int> ms;
	for (int& x : a) cin >> x;
	for (int i = 0;i < k; i++){
		ms.insert(a[i]);	
	}
	for (int i = k; i < n; i++){
		cout << *ms.rbegin() << ' ';
		ms.erase(ms.find(a[i-k]	));
		ms.insert(a[i]);
	}
	cout << *ms.rbegin() << endl;
	
	unordered_set<int> us;
	for (int i = 0; i < n; i++){
		us.insert(a[i]);
	}
	for (int x : us) cout << x << " ";
	
	

	return 0;
}
