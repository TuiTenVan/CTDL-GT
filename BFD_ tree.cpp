#include<bits/stdc++.h>

using namespace std;

int n, x, socanh1 = 0, socanh2 = 0, a[1000][1000];
int v1[1000][2], v2[1000][2];
bool check[1000];
vector<int> adj[1000];

void init(){
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    memset(check, false, sizeof(check));
}
void Tree_DFS(int x){
    check[x] = true;
    for(int it : adj[x]){
        if(!check[it]){
            socanh1++;
            if(it < x){
                v1[socanh1][1] = it, v1[socanh1][2] = x;
            }
            else{
                v1[socanh1][1] = x, v1[socanh1][2] = it;
            }
            Tree_DFS(it);
        }
    }
}
void xuatDFS(){
    cout << "DFS tree" << endl;
    for(int i = 1; i <= socanh1; i++){
        for(int j = 1; j <= 2; j++){
            cout << v1[i][j] << ' ';
        }
        cout << endl;
    }
}
void Tree_BFS(int x){
    memset(check, false, sizeof(check));
    queue<int > q;
    q.push(x);
    check[x] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int it : adj[u]){
            if(!check[it]){
                q.push(it);
                check[it] = true;
                socanh2++;
                if(it < u){
                    v2[socanh2][1] = it, v2[socanh2][2] = u;
                }
                else{
                    v2[socanh2][1] = u, v2[socanh2][2] = it;
                }
            }
        }
    }
}
void xuatBFS(){
    cout << "BFS tree" << endl;
    for(int i = 1; i <= socanh2; i++){
        for(int j = 1; j <= 2; j++){
            cout << v2[i][j] << ' ';
        }
        cout << endl;
    }
}
int main(){
    init();
    Tree_DFS(x);
    xuatDFS();
    Tree_BFS(x);
    xuatBFS();
}
