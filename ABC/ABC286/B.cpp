#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << regex_replace(s, regex("na"), "nya") << endl;
}
