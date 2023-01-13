#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;
    vector<long long> A(n);
    long long s = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        s += A[i];
    }
    
    long long rem = t % s;
    
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        if (sum + A[i] > rem) {
            cout << i + 1 << ' ' << rem - sum << '\n';
            return 0;
        }
        sum += A[i];
    }
    
    return 0;
}