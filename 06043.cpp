#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		long long sum = 0;
		for(int &x : a){
			cin >> x;
			sum += x;
		}
		int ok = 0;
		long long tmp = 0;
		for(int i = 0; i < n; i++){
			if(tmp * 2 + a[i] == sum){
				cout << i + 1 << endl;
				ok = 1;
				break;
			}
			tmp += a[i];
		}
		if(!ok) cout << "-1\n";
	}
	return 0;
}
