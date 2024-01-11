#include<bits/stdc++.h>

using namespace std;

vector<int> v[1000];
bool check[1000];
int parent[1000];

void dfs(int u){
    check[u] = true;
    for(int x : v[u]){
        if(!check[x]){
            parent[x] = u;
            dfs(x);
        }
    }
}
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
bool duongdi(int s, int t){
    memset(check, false, sizeof(check));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    if(!check[t]){
        return false;
    }
    else{
        return true;
    }
}
bool duongdi1(int s, int t){
    memset(check, false, sizeof(check));
    memset(parent, 0, sizeof(parent));
    bfs(s);
    if(!check[t]){
        return false;
    }
    else{
        return true;
    }
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
	    cin >> n >> m;
	    for(int i = 0; i < m; i++){
	        int x, y; cin >> x >> y;
	        v[x].push_back(y);
	        v[y].push_back(x);
	    }
	    int q; cin >> q;
	    while(q--){
	    	int s, t; cin >> s >> t;
	    	if(duongdi(s, t) || duongdi1(s, t)){
	    		cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}
		for(int i = 1; i <= 1000; i++){
			v[i].clear();
		}
	}
    return 0;
}
