#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    
    int vec[110];
    for(int i = 0; i < N; i++){
        cin >> vec[i];
    }
    
    sort(vec, vec + N, greater<int>());
    
    int Alice = 0, Bob = 0;
    for(int i = 0; i < N; i++){
        if(i % 2 == 0) Alice += vec[i];
        else Bob += vec[i];
    }
    
    cout << Alice - Bob << endl;
    
}