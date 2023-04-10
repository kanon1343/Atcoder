#include <bits/stdc++.h>
using namespace std;

bool is_exist_diff(vector<long long>& A, long long X) {
    if(X == 0) return true;
    sort(A.begin(), A.end());
    for (long long i = 0; i < A.size(); i++) {
        if(binary_search(A.begin(), A.end(), A[i]+X)) {
            return true;
        }
    }
    return false;
}

int main() {
    long long N, X;
    cin >> N >> X;
    vector<long long> A(N);
    for (long long i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    if (is_exist_diff(A, X)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
