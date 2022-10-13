#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    vector<int> B(K);
    
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < K; i++) cin >> B[i];
    
    int max = 0;
    string ans = "No";
    vector<int> num(N);
    for(int i = 0; i < N; i++){
        if(max <= A[i]){
            max = A[i];
        }
    }
    
    int count = 0;
    for(int i = 0; i < N; i++){
        if(A[i] == max){
            num[count] = i+1;
            count++;
        }
    }
    
    for(int i = 0; i < num.size(); i++){
        for(int j = 0; j < K; j++){
            if(num[i] == B[j]){
                ans = "Yes";
                break;
            }
        }
    }
    
    cout << ans << endl;
    
}