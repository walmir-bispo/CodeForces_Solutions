
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
 
    int n, number; cin >> n;
    
    int solve = 0;
 
    for(int i=0; i<n;i++){
        int count = 0;
        for(int j=0; j<3;j++){
            cin >> number;
            if(number == 1) count++;
        }
 
        if(count >= 2) solve++;
    }
 
    cout << solve;
 
    return 0;
}