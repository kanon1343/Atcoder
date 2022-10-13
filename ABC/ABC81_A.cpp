#include <iostream>
using namespace std;
 
int main() {
    vector<int> vec;
    for(int i = 0; i < 3; i++){
        cin >> vec.at(i);
    }
    
    cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;
}
