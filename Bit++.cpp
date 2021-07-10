#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false), cin.tie(0);

    int n; cin >> n;

    int x = 0;
    string operation;

    for(int i=0; i<n;i++){
        cin >> operation;
        if(operation.at(1) == '+') ++x;
        else --x;     
    }

   cout << x;

    return 0;
}