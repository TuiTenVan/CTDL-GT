#include<bits/stdc++.h>

using namespace std;

vector<int> v[1000];
bool check[1000];
int parent[1000];

//void dfs(int u){
//    check[u] = true;
//    for(int x : v[u]){
//        if(!check[x]){
//            parent[x] = u;
//            dfs(x);
//        }
//    }
//}
void bfs(int u){
    queue<int> q;
    check[u] = true;
    q.push(u);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int it : v[x]){
            if(!check[it]){
                q.push(it);
                check[it] = true;
                parent[it] = x;
            }
        }
    }
}
//void duongdi(int s, int t){
//    memset(check, false, sizeof(check));
//    memset(parent, 0, sizeof(parent));
//    dfs(s);
//    if(!check[t]){
//        cout << "-1";
//    }
//    else{
//        vector<int> path;
//        while(t != s){
//            path.push_back(t);
//            t = parent[t];
//        }
//        path.push_back(s);
//        reverse(path.begin(), path.end());
//        for(int x : path){
//            cout << x << " ";
//        }
//    }
//}
void duongdi1(int s, int t){
    memset(check, false, sizeof(check));
    memset(parent, 0, sizeof(parent));
    bfs(s);
    if(!check[t]){
        cout << "-1";
    }
    else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(int x : path){
            cout << x << " ";
        }
    }
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m, s, t;
	    cin >> n >> m >> s >> t;
	    for(int i = 0; i < m; i++){
	        int x, y; cin >> x >> y;
	        v[x].push_back(y);
	        v[y].push_back(x);
	    }
	    duongdi1(s, t);
	    cout << endl;
	    for(int i = 1; i <= 1000; i++){
	    	v[i].clear();
		}
	}
    return 0;
}
