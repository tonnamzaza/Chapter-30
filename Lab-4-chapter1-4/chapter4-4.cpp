#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {2, 5, 6, 8};

    auto it = s.find(6);
    cout << *it << "\n"; // 6

    it = s.begin();
    cout << *it << "\n"; // 2

    it = s.end();
    it--;
    cout << *it << "\n"; // 8
}