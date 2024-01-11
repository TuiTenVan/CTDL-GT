#include<bits/stdc++.h>

using namespace std;

int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ok = 0;
		for(int i = 0; i <= n / 2; i++){
			if(nt(i) && nt(n - i)){
				cout << i << ' ' << n - i << endl;
				ok = 0;
				break;
			}
			else{
				ok = 1;
			}
		}
		if(ok) cout << "-1" << endl;
	}
	return 0;
}
