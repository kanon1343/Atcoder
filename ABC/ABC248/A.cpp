#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    
    int ans = 0;
    if(s[0] != '0') {
        cout << 0 << endl;
    } else {
        for(int i = 0; i < 9; i++){
            if(s[i] + 1 != s[i+1]){
                ans = s[i] - '0';
                break;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}