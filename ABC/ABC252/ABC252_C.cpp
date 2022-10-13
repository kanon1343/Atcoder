#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int N;
    int ans = 1000000;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];

    for(int i = 0; i < 10; i++){
        char c = '0' + i;
        vector<int> count(10);
        for(int j = 0; j < N; j++){
            for(int k = 0; k < 10; k++){
                if(c == S[j][k]) count[k]++;
            }
        }

        int now = 0;
        for(int j = 0; j < 10; j++){
            int t = j + 10 * (count[j] - 1);
            now = max(now, t); 
        }
        ans = min(now, ans);
    }

    cout << ans << endl;
    return 0;
}