#include<bits/stdc++.h>

using namespace std;

int n, m, d[1000][1000];
vector<pair<int,int> v[1000];
void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        v[x].push_back({y, w});
        v[y].push_back({x, w});
    }
}
void floyd(){
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(d[i][k] != INF && d[k][j] != INF){
                    if(d[i][j] > d[i][k] + d[k][j]){
                        d[i][j] = d[i][k] + d[k][j];
                        parent[i][j] = parent[i][k];
                    }
                }
            }
        }
    }
}
int main(){
    
    return 0;
}