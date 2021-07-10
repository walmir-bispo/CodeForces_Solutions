
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
 
    int n; cin >> n;
 
    for(int i=0; i<n;i++){
        string str; cin >> str;
 
        if(str.length() > 10){
            cout << str.at(0) << str.length()-2 << str.at(str.length()-1) << endl;
        }else{
            cout << str << endl;
        }
    }
 
    return 0;
}