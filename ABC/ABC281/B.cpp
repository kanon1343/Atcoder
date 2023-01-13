#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool flag = true;
    if(!(isupper(s[0]))){
        flag = false;
    }
    
    int n = 0;
    for(int i = 1; i < 7; i++){
        if(isdigit(s[i])){
            int a = s[i] - '0';
            n += a * pow(10, 6-i);
        } else {
            flag = false;
            break;
        }
    }
    
    if(!(isupper(s[7]))){
        flag = false;
    }
    
    if(flag){
        if(100000 <= n && n <= 999999){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else{
        cout << "No" << endl;
    }
    return 0;
}