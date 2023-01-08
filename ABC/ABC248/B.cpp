#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    long long A, B, K, i;
    cin >> A >> B >> K;
    for(i = 0; A < B; ++i){
         A = A * K;
    }
    cout << i << endl;
}
