#include <bits/stdc++.h>
 
using namespace std;
 
int sudoku[9][9];
 
void f(int i, int j){
    if(sudoku[i][j] == 1) sudoku[i][j] = 2;
    else sudoku[i][j] = 1;
}
 
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
 
    int t; cin >> t;
    string aux;
    vector <string> str;
 
    for(int k = 0; k<t;k++){
 
        for(int i=0; i<9;i++){
            cin >> aux;
            str.push_back(aux);
        }
 
        for(int i=0; i<9;i++){
            for(int j=0; j<9;j++){
                sudoku[i][j] = str[i].at(j) - '0';
            }
        }
 
        f(0,0); f(1,3); f(2,6); f(3,1); f(4,4); f(5,7); f(6,8); f(7,5); f(8,2);
 
        for(int i=0; i<9;i++){
            for(int j=0;j<9;j++){
                cout << sudoku[i][j];
            }
 
            cout << "\n";
        }
 
        str.clear();
    }
 
 
    return 0;
}