#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;

    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    
    for(int i = 0; i < (q-p+1); i++){
        int tmp = A[p+i-1];
      	A[p+i-1] = A[r+i-1];
      	A[r+i-1] = tmp;
    }
    
    for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }
    return 0;
}