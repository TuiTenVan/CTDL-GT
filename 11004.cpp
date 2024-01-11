#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; 
        getline(cin, s);
        queue<int> q;
        q.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(s[i] == 'L'){
                q.push(s[i - 1]);
            }
            else{
                break;
            }
        }
        for(int i = 1; i < s.size(); i++){
            if(s[i] == 'R'){
                q.push(s[i - 1]);
            }
            else{
                break;
            }
        }
        while(!q.empty()){
            int x = q.front();
            cout << x << ' ';
            q.pop();
        }
        cout << endl;
    }
    return 0;
}