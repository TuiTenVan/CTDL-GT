#include<bits/stdc++.h>

using namespace std;

void Try(int a[], int n){
	if(n == 0){
		return ;
	}
	int b[n - 1];
	for(int i = 0; i < n - 1; i++){
		b[i] = a[i] + a[i + 1];
	}
	Try(b, n - 1);
	cout << "[";
	for(int i = 0; i < n; i++){
		cout << a[i];
		if(i != n - 1){
			cout << " ";
		}
	}
	cout << "] ";
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		Try(a, n);
		cout << endl;
	}
	return 0;
}
