#include<bits/stdc++.h>

using namespace std;

string tt = "+-*/";
bool check(char c){
    for(int i = 0; i < tt.size(); i++){
        if(tt[i] == c){
            return true;
        }
    }
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        string x, k;
        for(int i = s.size() - 1; i >= 0; i--){
            if(check(s[i])){
                x = st.top();
                st.pop();
                k = st.top();
                st.pop();
                st.push(x + k + s[i]);
            }
            else{
                st.push(string(1, s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}