#include<bits/stdc++.h>
using namespace std;

using namespace std;

bool check(long long n){
    while(n){
        int r = n % 10;
        if(r != 1 || r != 0){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<long long> q;
        q.push(1);
        while(!q.empty()){
            long long k = q.front();
            q.pop();
            if(k % n == 0){
                cout << k << endl;
                break;
            }
            q.push(k * 10);
            q.push(k * 10 + 1);
        }
    }
    return 0;
}