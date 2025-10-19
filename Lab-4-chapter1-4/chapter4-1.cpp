#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {3, 2, 5, 4};
    v.push_back(6);
    cout << v[1] << "\n"; // 2

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}