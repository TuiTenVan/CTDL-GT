#include<iostream>

using namespace std;

int a[1000][1000], n, i;
int c[1000], b[1000];

void init(){
    cin >> n >> i;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        c[i] = 0;
    }
}
void xuat(){
    for(int i = 0; i <= n; i++){
        cout << b[i] << ' ';
    }
    cout << endl;
}
void hamilton(int *b, int *c, int i){
    for(int j = 1; j <= n; j++){
        if(a[b[i - 1]][j] == 1 && c[j] == 0){
            b[i] = j;
            c[j] = 1;
            if(i < n) hamilton(b, c, i + 1);
            else{
                if(b[i] == b[0]) xuat();
            }
            c[j] = 0;
        }
    }
}
int main(){
    b[0] = 1;
    init();
    hamilton(b,c, i);
    return 0;
}
