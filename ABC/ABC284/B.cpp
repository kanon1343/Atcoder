#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;
    int ans = 0;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        ans = 0;
        for(int j = 0; j < n; j++){
            long long A;
            cin >> A;
            if(A % 2 != 0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
