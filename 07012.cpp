#include<bits/stdc++.h>

using namespace std;

string tt = "+-*/";

bool check(char c){
    for(int i = 0; i < tt.size(); i++){
        if(c == tt[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<string> st;
        string res = "";
        for(int i = 0; i < s.size(); i++){
            if(check(s[i])){
                string y = st.top();
                st.pop();
                string x = st.top();
                st.pop();
                res = "(" + x + s[i] + y + ")";
                st.push(res);
            }
            else{
                st.push(string(1, s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}