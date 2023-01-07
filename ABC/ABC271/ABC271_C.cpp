#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(a[i]);    
    }

    int ans = 0, costs = 0;
    for(int i = 1;; i++){
        if(st.count(i)) costs += 1; else costs += 2;
        if(costs > n) break;
        ans = i;
    }
    cout << ans << endl;
    return 0;
}