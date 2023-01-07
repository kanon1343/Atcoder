#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    int A[N];
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }
    cin >> Q;

    for(int i = 0; i < Q; i++){
        int tool;
        cin >> tool;

        if(tool == 1){
            int k, x;
            cin >> k >> x;
            A[k] = x;
        } else if(tool == 2){
            int k;
            cin >> k;
            cout << A[k] << endl;
        }
    }

    return 0;
}
