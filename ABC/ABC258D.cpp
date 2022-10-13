#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {
    int n, x;
    cin >> n >> x;

    vector<int> A(n), B(n);

    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }

    int64_t ans = INT64_MAX, sum = 0;

    for(int i = 0; i < n; i++){
        if(i - 1 > x){
            break;
        } else {
            sum += A[i] + B[i];
            ans = min(ans, sum + (int64_t)B[i] * (x - i - 1));
        }
    }
}