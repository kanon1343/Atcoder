#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    
    char s;
    cin >> s;
    
    char a;
    bool flag = true;
    for(int i = 0; i < n-1; i++){
        cin >> a;
        if(s == a){
            flag = false;
            break;
        } else {
            s = a;
        }
    }
    
    if(flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
