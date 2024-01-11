#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int j, val = 0;
	for(int i = 0; i < n; i++){
		cout << "Buoc " << i << ": ";
		val = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > val){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = val;
		for(j = 0; j <= i; j++){
			cout << a[j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
