#include<iostream> 
#include<queue>
#include<vector>

using namespace std;

int n, k, x, a[1000][1000], canh[1000][1000];
bool visited[1000];

void BFS_Tree(int k){
    queue<int> q;
    q.push(k);
    visited[k] = true;
    while(!q.empty()){
        k = q.front();
        q.pop();
        for (int i = 1; i <= n; i++){
            if (!visited[i] && a[k][i]){
                x++;
                q.push(i);
                visited[i] = true;
                canh[x][1] = k; 
                canh[x][2] = i;
            }
        }
    }
}

int TestLienThong(){
    for (int i = 1; i <= n; i++){
        if (!visited[i]) return 1;
    }
    return 0;
}
void result(){
    for (int i = 1; i <= n - 1; i++){
        if (canh[i][1] < canh[i][2])
            cout << canh[i][1] << " " << canh[i][2];
        else 
            cout << canh[i][2] << " " <<canh[i][1];
        cout << endl;
    }
}

int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        visited[i] = false;
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    x = 0;  
    BFS_Tree(k);
    if (!TestLienThong()){
    cout << "Queue BFS tree" << endl;
    result();
    }
    else cout << "No spanning tree";
    return 0;
}
