#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string res = "";
        stack<string> st;
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                st.push(string(1, s[i]));
            }
            else{
                res = st.top();
                st.pop();
                res = s[i] + res;
                res = st.top() + res;
                st.pop();
                st.push(res);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}