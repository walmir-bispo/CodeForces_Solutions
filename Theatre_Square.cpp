#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
 
    double n, m, a;
 
    cin >> n >> m >> a;
 
    long long result=0;
    result += ceil(n/a)*ceil(m/a);
 
    cout << result;
 
    return 0;
}
