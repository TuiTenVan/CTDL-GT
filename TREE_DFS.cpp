#include<bits/stdc++.h>

using namespace std;

int n, x, a[1000][1000], socanh = 0;
bool check[1000];
vector<int> adj[1000];
int v[100][2];

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
    if(socanh == n - 1) return ;
    for(int u : adj[x]){
        if(!check[u]){
            socanh++;
            if(x < u){
	            v[socanh][1] = x, v[socanh][2] = u;
	        }
	        else{
	        	v[socanh][1] = u, v[socanh][2] = x;
			}
            if(socanh == n - 1) return;
            Tree_DFS(u);
        }
    }
}
void xuat(){
    cout << "DFS tree" << endl;
    for(int i = 1; i <= socanh; i++){
        for(int j = 1; j <= 2; j++){
            cout << v[i][j] << ' '; 
        }
        cout << endl;
    }
}
int main(){
    init();
    Tree_DFS(x);
    xuat();
    return 0;
}
