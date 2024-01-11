#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll mod = 1e9 + 7;
ll poww(ll a, ll b){
	if(b == 0) return 1;
	ll x = poww(a, b / 2);
	if(b % 2 == 0){
		return (x * x) % mod;
	} 
	else{
		return (a * ((x * x) % mod)) % mod;
	}
}
int main(){
	while(1){
		ll a, b; cin >> a >> b;
		if(a == 0 && b == 0){
			return 0;
		}
		if(b == 0){
			cout << "1" << endl;
		}
		else{
			cout << poww(a, b) << endl;
		}
	}
}
