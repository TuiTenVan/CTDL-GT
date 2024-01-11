#include<bits/stdc++.h>

using namespace std;

int partition(int a[], int l , int h){
	int x = a[h];
	int i = l - 1;
	for(int j = 1; j <= h - 1; j++){
		if(a[j] <= x){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[h]);
	return i + 1;
}
void quickSort(int a[], int l , int h){
	if(l < h){
		int p = partition(a, l, h);
		quickSort(a, l, p - 1);
		quickSort(a, p + 1, h);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		quickSort(a, 0, n - 1);
		for(int i = 0; i < n; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
