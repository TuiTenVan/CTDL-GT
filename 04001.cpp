#include<bits/stdc++.h>

using namespace std;

long long poww(long long n, long long k, int mod){
	if(k == 0){
		return 1;
	}
	long long x = poww(n, k /2, mod);
	if(k % 2 == 0){
		return (x * x) % mod;
	}
	else{
		return (n * ((x * x) % mod)) % mod;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n, k; cin >> n >> k;
		int mod = 1e9 + 7;
		cout << poww(n, k , mod) << endl;
	}
	return 0;
}
