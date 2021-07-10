
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
 
    int n, k;
    cin >> n >> k;
 
    int numbers[n +5];
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
 
    int answer = 0;
    for(int i=0; i<n; i++){
        if(numbers[i] >= numbers[k-1] && numbers[i] > 0) answer++;
        else break;
    }
    
    cout << answer;
    
 
    return 0;
}