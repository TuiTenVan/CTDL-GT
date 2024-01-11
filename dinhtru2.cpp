#include<bits/stdc++.h>

using namespace std;

int n, a[1000][1000];
vector<int> v[10000];
bool check[1000];

void init(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                v[i].push_back(j);
            }
        }
    }
    memset(check, false, sizeof(check));
}
void dfs(int u){
    check[u] = true;
    for(int x : v[u]){
        if(!check[x]){
            dfs(x);
        }
    }
}
bool check1(){
    for(int i = 0; i < n; i++){
        if(!check[i]){
            return true;
        }
    }
    return false;
}
void reinit(){
    for(int i = 0; i < n; i++){
        check[i] = false;
    }
}
int main(){
    init();
    for(int i = 1; i <= n; i++){
        dfs(1);
        reinit();
        if(check1()){
            cout << i << ' ';
        }
      //  reinit();
    }
    return 0;
}