#include<bits/stdc++.h>

using namespace std;

int n, a[1000];

void Try(int n){
	if(n > 0){
		cout << "[";
		for(int i = 1; i < n; i++){
			cout << a[i] << ' ';
		}
		cout << a[n] << "]" << endl;
		for(int i = 1; i < n; i++){
			a[i] = a[i] + a[i + 1];
		}
		Try(n - 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}	
		Try(n);	
	}
	return 0;
}

