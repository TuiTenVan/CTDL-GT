#include<bits/stdc++.h>

using namespace std;

long long check(long long n){
	long long dao = 0, m = n;
	while(m){
		dao = dao * 10 + m % 10;
		m /= 10;
	}
	return dao;
}
long long poww(long long n, long long k, int mod){
	if(k == 0){
		return 1;
	}
	long long x = poww(n, k / 2, mod);
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
		long long n; cin >> n;
		int mod = 1e9 + 7;
		long long k = check(n);
		cout << poww(n, k , mod) << endl;
	}
	return 0;
}
