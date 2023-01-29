#include <bits/stdc++.h>
using namespace std;
 
int FindSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    int result = 0,ans = 0;
    for(int i = 1; i <= N; i++){
        result = FindSum(i);
        if(A <= result && result <= B){
            ans += i;
        }
    }
    cout << ans << endl;
}
