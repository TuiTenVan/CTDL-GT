#include<bits/stdc++.h>

using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].first >> a[i].second;
        }
        int dem = 0;
        sort(a, a + n, cmp);
        int val = a[0].second;
        for(int i = 1; i < n; i++){
            if(a[i].first >= val){
                val = a[i].second;
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}