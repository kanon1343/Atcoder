#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> S(n);
    for(int i = 0; i < n; i++){
       cin >> S[i];
    }

    int ans = 0;
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(k = 0; k < m; k++){
                if((S[i][k] != 'o') && (S[j][k] != 'o')){
                    break;
                }
            }
            if(k == m){
                ans++;
            }  
        }
    }
    cout << ans << endl;
    return 0;
}