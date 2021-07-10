#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false), cin.tie(0);

    int m, n;
    cin >> m >> n;

    int result = 0;
    result += floor(m/2) * n;
    if(m%2 != 0) result += floor(n/2);

    cout << result;  

      
    return 0;
}