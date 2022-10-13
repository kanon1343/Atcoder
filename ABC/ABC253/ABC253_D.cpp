#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main (){
    long long N, A, B;
    cin >> N >> A >> B;

    long long count = 0, countA = 0, countB = 0, countL = 0;
    long long l = lcm(A, B);
    long long ans = 0;
    
    ans = N * (N + 1) / 2;
    count = N / A;
    ans -= A * count * (count + 1) / 2;
    count = N / B;
    ans -= B * count * (count + 1) / 2;
    count = N / l;
    ans += l * count * (count + 1) / 2;

    cout << ans << endl;
}