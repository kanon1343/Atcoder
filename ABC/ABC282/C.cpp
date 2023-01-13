#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '"'){
            count++;
        } else if(!(count % 2) && s[i] == ','){
            s[i] = '.';
        }
    }
    cout << s << endl;
    return 0;
}