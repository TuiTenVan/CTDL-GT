#include<bits/stdc++.h>

using namespace std;

int n, k, ans = 0;
int a[1000], b[1000];

void back_track(int x1, int x2){
    if(x2 == k){
        ans++;
        return;
    }
    for(int i = x1 + 1; i < n; i++){
        if(a[i] > a[x1]){
            b[x2 + 1] = a[i];
            back_track(i, x2 + 1);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        b[0] = a[i];
        back_track(i, 1);
    }
    cout << ans << endl;
    return 0;
}