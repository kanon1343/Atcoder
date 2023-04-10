#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 8;
    string s;
    cin >> s;

    map<char, vector<int>> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]].push_back(i);
    }
    bool flag = true;
    if((mp['B'][0] + mp['B'][1]) % 2 == 0){
        flag = false;
    } 
    if(!((mp['R'][0] < mp['K'][0]) and (mp['K'][0] < mp['R'][1]))){
        flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
}