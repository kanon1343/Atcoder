#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    string str;
    int ans = 0;
    cin >> str;

    if(str[0] == '1') ans++;
    if(str[1] == '1') ans++;
    if(str[2] == '1') ans++;
    
    cout << ans << endl;
}
