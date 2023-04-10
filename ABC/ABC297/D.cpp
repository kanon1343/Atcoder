#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    long long count = 0;
    while (b > 0) {
        count += a /b;
        a %= b;
        swap(a, b);
    }
    return count;
}

int main() {
    long long A, B;
    cin >> A >> B;
    if(A == B) {
        cout << 0 << endl;
    } else {
        cout << gcd(A, B) - 1 << endl;
    }
    return 0;
}
