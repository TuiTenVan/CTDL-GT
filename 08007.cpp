#include<bits/stdc++.h>
using namespace std;

bool check(string k, string n){
    return k.size() < n.size() || (k.size() == n.size() && k <= n); 
}
int main(){
    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        queue<string> q;
        q.push("1");
        int ans = 0;
        while(q.size()){
            string k = q.front();
            ans++;
            q.pop();
            if(check(k + "0", n)){
                q.push(k + "0");
            }
            if(check(k + "1", n)){
                q.push(k + "1");
            }
        }
        cout << ans << endl;
    }
    return 0;
}