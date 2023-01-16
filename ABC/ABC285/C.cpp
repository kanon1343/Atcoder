#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    long long ans = 0;
    reverse(s.begin(), s.end());
    int n = s.length();
    for(int i = 1; i < n; i++){
        ans += (pow(26, i) * (s[i] - 'A' + 1));
    }
    ans += (s[0] - 'A' + 1);
    cout << ans << endl;
    return 0;
}