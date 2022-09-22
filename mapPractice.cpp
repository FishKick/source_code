#include <bits/stdc++.h>
#include <math.h>

#define ll long long

// đếm tần suất xuất hiện của các từ trong xâu
// map<string , int>
//9
//java
//python
//string
//java
//python
//C++
//sql
//sql
//java


using namespace std;

int main(){
	map <string, int > mp;
	int n; cin >> n;
	vector<string> v;
	
	for (int i= 0; i < n; i++){
		string s; cin >> s;
		mp[s]++;
		v.push_back(s);
	}
		
	
	for(auto it : mp) {
		if (it.second != 0){
			cout << it.first << " " << it.second << endl;
			it.second = 0;
		}
	}
	
//	C++ 1
//	java 3
//	python 2
//	sql 2
//	string 1
	
	
//	cout << it.first << " " << it.second << endl;
// in ra theo thứ tự xuất hiện trong mảng

//	for (int i = 0; i < v.size();i++){
//		if (mp[v[i]] != 0){
//			cout << v[i] << " " << mp[v[i]] <<endl;
//			mp[v[i]] = 0; 
//		}
//	}
//	python 2
//	java 3
//	string 1
//	C++ 1
//	sql 2


//	cách return cái từ xuất hiện nhiều nhất trong chuỗi đã cho
	int max_fre = 0;
	string res;
	for (auto it : mp){
		if (it.second > max_fre){
			max_fre = it.second;
			res = it.first;
		}
	}
	cout << endl;
	cout <<  res << " " << max_fre << endl;
	
	
	return 0;
}
