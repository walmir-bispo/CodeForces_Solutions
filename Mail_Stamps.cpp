#include <bits/stdc++.h>
 
using namespace std;
 
map <long long, vector<long long>> g;
map <long long, bool> vis;
 
void dfs(long long u){
    if(vis[u]) return;
    vis[u] = true;
 
    cout << u << " ";
    for(int i=0; i<g[u].size(); i++){
        int v = g[u][i];
        dfs(v);
    }
}
 
 
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
 
    long long n; cin >> n;
    long long x1, x2;
 
 
    for(int i=0; i<n; i++){
        cin >> x1 >> x2;
 
        g[x1].push_back(x2);
        g[x2].push_back(x1);
        vis[x1] = false; vis[x2] = false;
    }
 
    map <long long, vector<long long>> :: iterator it;
    for(it = g.begin(); it != g.end() ;it++){
        if(it->second.size() == 1){
           dfs(it->first);
            break;
        }
 
    }
 
 
    return 0;
}