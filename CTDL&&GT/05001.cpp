#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string x, y;
        cin >> x >> y;
        int n = x.size(), m = y.size();
        int f[n + 1][m + 1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 || j == 0){
                    f[i][j] = 0;
                }
                else{
                    if(x[i - 1] == y[j - 1]){
                        f[i][j] = f[i - 1][j - 1] + 1;
                    }
                    else{
                        f[i][j] = max(f[i][j - 1], f[i-1][j]);
                    }
                }
            }
        }
        cout << f[n][m] << endl;
    }
    return 0;
}