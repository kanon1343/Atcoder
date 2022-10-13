#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int H, W;
    int ans = 0;
    cin >> H >> W;
    vector<string> S(H);
    vector<int> num(4);
    for(int i = 0; i < H; i++) cin >> S[i];

    int count = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(S[i][j] == 'o'){
                num[count] = i;
                count++;
                num[count] = j;
                count++;
            }
        }
    }

    ans = max(num[0],num[2]) - min(num[0],num[2]);
    ans += max(num[1],num[3]) - min(num[1],num[3]);

    cout << ans << endl;

    return 0;
}
