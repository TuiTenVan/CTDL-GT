#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		cout << "Buoc " << i + 1 << ": ";
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
			}
		}
		for(int k = 0; k < n; k++){
			cout << a[k] << ' ';
		}
		cout << endl;
	}
	return 0;
}
