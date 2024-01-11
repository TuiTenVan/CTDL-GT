#include<bits/stdc++.h>
using namespace std;

long long mul(long long n, long long mod){
    if(n == 0) return 1;
    if(n == 1) return 2;
    long long p = mul(n / 2, mod);
    if(n % 2 == 0) return (p * p) % mod;
    else return (2 * ((p * p) % mod)) % mod;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long mod = 123456789;
        n--;
        cout << mul(n, mod) << endl;
    }
    return 0;
}