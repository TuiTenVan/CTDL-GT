#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        vector<string> v;
        q.push("6");
        q.push("8");
        while(!q.empty()){
            string k = q.front();
            v.push_back(k);
            q.pop();
            if(k.size() < n){
                q.push(k + "6");
                q.push(k + "8");
            }
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}