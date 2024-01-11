#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long a[n + 1];
        a[1] = 1;
        a[2] = 1;
        for(int i = 3; i <= n; i++){
            a[i] = a[i - 1] + a[i - 2];
        }
        while(1){
            if(n == 1){
                cout << "0\n";
                break;
            }
            if(n == 2){
                cout << "1\n";
                break;
            }
            if(n > a[n - 2]){
                n--;
            }
            else{
                n -= 2;
            }
        }
    }
    return 0;
}