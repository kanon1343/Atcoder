#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<string> S(n);
    for(int i = 0; i < n; i++){
        cin >> S[i];
    }
    reverse(S.begin(), S.end());
    
    for(int i = 0; i < n; i++){
        cout << S[i] << endl;
    }
    return 0;
}
