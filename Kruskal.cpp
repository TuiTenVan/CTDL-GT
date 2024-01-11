#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct edge{
    int u, v, w;
};

int m;
int parent[1000], sz[1000];
vector<edge> canh;
int a[1000][1000];

void make_set(){
    for(int i = 1; i <= m; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}
int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}
bool Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a == b) return false;
    if(sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] + sz[b];
    return true;
}
void inp(){
    cin >> m;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            edge e;
            if(a[i][j] != 0 && i < j){
                e.u = i, e.v = j, e.w = a[i][j];
                canh.push_back(e);
            }
        }
    }
}
bool cmp(edge a, edge b){
    if(a.w == b.w){
        if(a.u == b.u){
            return a.v < b.v;
        }
        else{
            return a.u < b.u;
        }
    }
    else{
        return a.w < b.w;
    }
}
void kruskal(){
    vector<edge> mst;
    int d = 0;
    sort(canh.begin(), canh.end(), cmp);
    for(edge e : canh){
        if(mst.size() == m - 1) break;
        if(Union(e.u, e.v)){
            mst.push_back(e);
            d += e.w;
        }
    }
    cout << "dH = " << d << endl;
    for(auto it : mst){
        cout << it.u << ' ' << it.v << endl;
    }
}
int main(){
    inp();
    make_set();
    kruskal();
    return 0;
}
