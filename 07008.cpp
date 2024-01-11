#include<bits/stdc++.h>

using namespace std;

string tt = "+-*/^";

bool check(char c){
    for(int i = 0; i < tt.size(); i++){
        if(c == tt[i]){
            return true;
        }
    }
    return false;
}
bool Var(char c){
    return c >= 'a' && c <= 'z'|| c >= 'A' && c <= 'Z';
}
int deg(char c){
    if(c == '^'){
        return 0;
    }
    if(c == '*' || c == '/'){
        return 1;
    }
    if(c == '+' || c == '-'){
        return 2;
    }
    return 3;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s, ans;
        cin >> s;
        stack<char> st;
        st.push('#');
        for(int i = 0; i < s.size(); i++){
            if(Var(s[i])){
                ans += s[i];
                continue;
            }
            if(s[i] == '('){
                st.push(s[i]);
                continue;
            }
            if(s[i] == ')'){
                while(st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
                continue;
            }
            if(check(s[i])){
                while(deg(st.top()) <= deg(s[i])){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
                continue;
            }
        }
        while(st.top() != '#'){
            ans += st.top();
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}