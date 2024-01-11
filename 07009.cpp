#include<bits/stdc++.h>

using namespace std;

string ts = "+-*/";
bool check(char c){
    for(int i = 0; i < ts.size(); i++){
        if(ts[i] == c){
            return true;
        }
    }
    return false;
}
bool Var(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        string res = "";
        for(int i = s.size() - 1; i >= 0; i--){
            if(check(s[i])){
                res = "(" + st.top();
                st.pop();
                res += s[i];
                res = res + st.top() + ")";
                st.pop();
                st.push(res);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}