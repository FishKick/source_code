#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

// cài đăt thuật toán selection Sort

void selectionSort(int a[], int n){
	for (int i = 0; i < n-1; i++){
		int min = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[min]){
				min = j; 
			}	
		}
		swap(a[i], a[min]);
	}
}
// cài đặt thuật toán bubble Sort

void bubbleSort(int a[], int n){
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-1-i; j++){
			if (a[j] > a[j+1]) swap(a[j], a[j+1]);
		}
	}
}

void insertion_sort(int a[], int n){
	for (int i = 1; i < n; i++){
		int x = a[i]; int pos = i - 1;
		while (pos >= 0 && x < a[pos]){
			a[pos+1]  = a[pos];
			pos--;
		}
		a[pos+1] = x;
	}
}


int main(){
	
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	bubbleSort(a, n);
//	selectionSort(a, n);
	
	for (int i= 0; i < n; i++) cout << a[i] << " ";

	return 0;
}
