#include <bits/stdc++.h>
using namespace std;
int main(void){
    char s[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> s[i][j];
        }
    }
    
    char a;
    int b;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(s[i][j] == '*'){
                a = 'a' + j;
                b = 8 - i;
                break;
            }
        }
    }
    cout << a << b << endl;
    return 0;
}
