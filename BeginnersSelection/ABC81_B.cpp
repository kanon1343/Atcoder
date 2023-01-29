#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; i++){
        cin >> vec.at(i);
    }
    
    int count = 0, ans = 0;
    
    while(1){
        for(int i = 0; i < N; i++){
            count += vec.at(i) % 2;
        }
        if(count != 0){
            break;
        } else{
            for(int i = 0; i < N; i++){
                vec.at(i) = vec.at(i) / 2;
            }
            ans++;
        }
    }
    cout << ans << endl;
}
