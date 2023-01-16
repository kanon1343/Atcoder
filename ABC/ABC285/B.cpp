#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    for(int i = 1; i < n; i++){
        int k = 0;
        while(k + i < n){
            if(s[k] != s[k+i]){
                k++;
            } else {
                break;
            }
        }
        int l = k;
        if(l <= n - i){
            cout << l << endl;
        } else {
            l = 0;
            cout << l << endl;
        }
    }
    return 0;
}