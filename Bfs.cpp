#include<iostream>
#include<vector>
#include<queue>

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
  //  memset(check, false, sizeof(check));
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    check[u] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(int it : v[x]){
            if(!check[it]){
                q.push(it);
                check[it] = true;
            }
        }
    }
}
int main(){
    init();
    bfs(1);
    return 0;
}
