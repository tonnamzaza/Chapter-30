#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.erase(2);
    s.insert(4);

    cout << s.count(3) << "\n"; // 1
    cout << s.count(2) << "\n"; // 0

    for (auto x : s) {
        cout << x << " ";
    }
    cout << "\n";
}