#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n, s, k; cin >> n >> s >> k;
		long long a[n];
		for(long long i = 0; i < n; i++){
			cin >> a[i];
		}
		long long sum = 0;
		int index = -1;
		for(int i = 1; i <= s; i++){
			sum += a[i];
			if(sum <= k){
				index = i;
			}
		}
		cout << index + 1 << endl;
	}
	return 0;
}
