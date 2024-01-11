#include<bits/stdc++.h>

using namespace std;

int find(int n, int a[], int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}
void Try(int n, int a[], int b[]){
    if(n == 0){
        return;
    }
    int k = find(n, a, b[0]);
    if(k != 0){
        Try(k, a, b + 1);
    }
    if(k != n - 1){
        Try(n - k - 1, a + k + 1, b + k + 1);
    }
    cout << b[0] << ' ';
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        Try(n, a , b);
        cout << endl;
    }
    return 0;
}