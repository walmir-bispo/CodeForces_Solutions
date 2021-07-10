#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
 
    int minimun = 1;

    int n; cin >> n;
    int q[n-1], aux[n];
 
    for(int i=0; i< n-1; i++){
        cin >> q[i];
    }
 
    vector <int> p; p.resize(n);
    p[0] = 1; aux[0] = 1;
 
    for(int i=1; i< n; i++){
        p[i] = q[i-1] + p[i-1];
        aux[i] = p[i]; minimun = min(minimun, aux[i]);
    }
 
    sort(p.begin(),p.end());
 
    bool ans = true;
    for(int i=1; i<p.size(); i++){
        if(p[i] - p[i-1] != 1){
            ans = false;
        }
    }
 
    if(!ans){
        cout << -1;
    }else{
        for(int i=0; i<n; i++){
            if(minimun < 1){
                cout << aux[i] + abs(minimun) + 1 << " ";
            }else if(minimun > 1){
                cout << aux[i] - abs(minimun) + 1 << " ";
            }else if(minimun == 1){
                cout << aux[i] << " ";
            }
        }
    }
 
    return 0;
}