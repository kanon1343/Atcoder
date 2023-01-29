#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int value;
    cin >> value;
    
    int total = 0, ans = 0;
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            for(int k = 0; k <= C; k++){
                total = 500 * i + 100 * j + 50 * k;
                if(total == value) ans++; 
            }
        }
    }
    
    cout << ans << endl;
}
