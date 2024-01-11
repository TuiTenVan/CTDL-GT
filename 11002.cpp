#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y, m;
        int n; cin >> n;
        cin.ignore();
        string s; getline(cin, s);
        string res = "";
        queue<int> q;
        for(int i = s.size() - 1; i >= 0; i--){
            if(isdigit(s[i])){
                res = s[i] + res;
                continue;
            }
            if(s[i] == ' '){
                if(res.size() > 0){
                    q.push(stoi(res));
                }
                res = "";
                continue;
            }
            x = q.front();
            q.pop();
            y = q.front();
            q.pop();
            if(s[i] == '*'){
                m = y * x;
            }
            if(s[i] == '+'){
                m = y + x;
            }
            if(s[i] == '-'){
                m = y - x;
            }
            if(s[i] == '/'){
                m = y / x;
            }
            q.push(m);
        }
        cout << q.front() << endl;
    }
    return 0;
}