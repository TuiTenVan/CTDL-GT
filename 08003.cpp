#include<bits/stdc++.h>

using namespace std;

int main(){
    int q, k;
    cin >> q;
    deque<int> d;
    string s;
    while(q--){
        cin >> s;
        if(s == "PUSHFRONT"){
            cin >> k;
            d.push_front(k);
        }
        else if(s == "PRINTFRONT"){
            if(d.empty()){
                cout << "NONE\n";
            }
            else{
                cout << d.front() << endl;
            }
        }
        else if(s == "POPFRONT"){
            if(d.size()){

                d.pop_front();
            }
        }
        else if(s == "PUSHBACK"){
            cin >> k;
            d.push_back(k);
        }
        else if(s == "PRINTBACK"){
            if(d.empty()){
                cout << "NONE\n";
            }
            else{
                cout << d.back() << endl;
            }
        }
        else if(s == "POPBACK"){
            if(d.size()){
                d.pop_back();
            }
        }
    }
    return 0;
}