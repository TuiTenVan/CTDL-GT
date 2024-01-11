#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    int count = 0; 
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if (it.second % 2 == 1){
            count++;
        }
    }
    if (count <= 1){
        cout << "YES\n";
    }else { // ngu?c l?i
        cout << "NO\n";
    }
    return 0;
}

