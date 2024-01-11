#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v1 = {"02", "20", "22"};
    vector<string> v2 = {"02"};
    vector<string> v3 = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            for(int k = 0; k < v3.size(); k++){
                cout << v1[i] + "/" + v2[j] + "/" + v3[k] << endl;
            }
        }
    }
    return 0;
}