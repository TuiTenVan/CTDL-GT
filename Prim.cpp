#include<iostream>
#include<vector>
#include<utility>
#include<climits>

using namespace std;

int n, k;
vector<pair<int,int>> adj[1000];
bool check[1000];
int a[1000][1000];

struct canh{
    int x, y, w;
};
void nhap(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0 && i < j){
                adj[i].push_back({j, a[i][j]});
                adj[j].push_back({i, a[i][j]});
            }
        }
    }
    for(int i = 1; i <= 1000; i++){
        check[i] = false;
    }
 //   memset(check, false, sizeof(check));
}
void prim(int u){
    vector<canh> mst;
    int d = 0;
    check[u] = true;
    while(mst.size() < n - 1){
        int min_w = INT_MAX;
        int X, Y;
        for(int i = 1; i <= n; i++){
            if(check[i] == true){
                for(auto it : adj[i]){
                    int j = it.first, trongso = it.second;
                    if(check[j] == false && trongso < min_w){
                        min_w = trongso;
                        X = j;
                        Y = i;
                    }
                }
            }
        }
        mst.push_back({X, Y, min_w});
        d += min_w;
        check[X] = true;
        cout << "dH = " << d << endl;
        for(canh e : mst){
            if(e.y < e.x){
                cout << e.y << ' ' << e.x << endl;
            }
            else{
                cout << e.x << ' ' << e.y << endl;
            }
        }
    }
}
int main(){
    nhap();
    prim(k);
    return 0;
}
