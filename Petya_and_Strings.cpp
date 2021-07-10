#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false), cin.tie(0);

    string str1, str2;

    cin >> str1;
    cin >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower); //convert all string to lower case
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    cout << str1.compare(str2);


    return 0;
}