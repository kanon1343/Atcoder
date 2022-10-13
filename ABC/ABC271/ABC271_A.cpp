#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b;
    a = n/16;
    b = n%16;

    char ansA = 'A' + a - 10;
    char ansB = 'A' + b - 10;
    
    if(a <= 9) cout << a;
    else cout << ansB;

    if(b <= 9) cout << b << endl;
    else cout << ansB << endl;
    return 0;
}