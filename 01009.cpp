#include<bits/stdc++.h>

using namespace std;

int n, k;
char a[1000];
int ok = 1;

void Try(){
    int j = n;
    while(j > 0 && a[j] != 'A'){
        j--;
    }
    if(j > 0){
        a[j] = 'B';
        for(int i = j + 1; i <= n; i++){
            a[i] = 'A';
        }
    }
    else{
        for(int i = 1; i <= n; i++){
            a[i] = 'A';
        }
        ok = 0;
    }
}
void xuat(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}
bool check(){
    for(int i = 1; i <= n - 2; i++){
        if(a[i] == a[i + 1] && a[i + 1] == a[i + 2]){
            return true;
        }
    }
    return false;
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        a[i] = 'A';
    }
    ok = 1;
    while(ok && check()){
        xuat();
        Try();
    }
    return 0;
}