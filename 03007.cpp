#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<long long>());
        long long ans = 0;
        for(int i = 0; i < n; i++){
            ans += a[i] * b[i];
        }
        cout << ans << endl;
    }
    return 0;
}