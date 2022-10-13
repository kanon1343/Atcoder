#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    
    char ans;
    string str("abcdefghijklmnopqrstuvwxyz");
    
    for(int i = 0; i < 26; i++){
        if(str.at(i) == N){
            ans = str.at(i);
            break;
        }  
        
    }
    
    cout << ans << endl;
    
}