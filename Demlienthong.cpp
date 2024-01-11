#include<iostream>
#include<vector>

using namespace std;

int n, a[1000][1000];
vector<int> v[1000];
bool check[1000];

void init(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j]){
                v[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        check[i] = false;
    }
}
void dfs(int u){
    check[u] = true;
    for(int it : v[u]){
        if(!check[it]){
            dfs(it);
        }
    }
}
bool lienthong(){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            ans++;
            dfs(i);
        }
    }
    cout << ans << endl;
}
int main(){
    init();
    lienthong();
    return 0;
}
