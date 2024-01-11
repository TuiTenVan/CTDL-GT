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
		int val = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[val]){
				val = j;
			}
		}
		swap(a[i], a[val]);
		for(int k = 0; k < n; k++){
			cout << a[k] << ' ';
		}
		cout << endl;
	}
	return 0;
}
