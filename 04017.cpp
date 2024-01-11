#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int m = n - 1;
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] == b[j]){
				i++;
				j++;
			}
			else{
				break;
			}
		}
		cout << i + 1 << endl;
	}
	return 0;
}
