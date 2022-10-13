#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main () {
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i = 0; i < N; i++) cin >> d[i];

    set <int> value;
    for(int i = 0; i < N; i++) value.insert(d[i]);

    cout << value.size() << endl; 
}