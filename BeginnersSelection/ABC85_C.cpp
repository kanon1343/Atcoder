#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, y;
    cin >> n >> y;
    
    int sum = 0;
    int a = -1;
    int b = -1;
    int c = -1;
    for(int i = 0; i <= n; i++){
        for(int j = 0; i+j <= n; j++){
            int k = n - j - i;
            sum = 10000 * i + 5000 * j + 1000 * k;
            if(sum == y) {
                a = i;
                b = j;
                c = k;
                break;
            }
        }
    }
    cout << a << " " << b << " " << c << " " << endl;
    return 0;
}
