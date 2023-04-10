#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, d;
    cin >> n >> d;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    bool flag = true;
    for(int i = 0; i < n-1; i++){
        if(v[i+1] - v[i] <= d){
            cout << v[i+1] << endl;
            flag = false;
            break;
        }
    }
    
    if(flag){
        cout << -1 << endl;
    }
    
    return 0;
}
