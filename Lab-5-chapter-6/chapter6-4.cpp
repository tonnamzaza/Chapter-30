#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> A(n), B(n);

    cout << "Enter elements of array A: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter elements of array B: ";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(A[i] - B[i]);
    }

    cout << "Min sum = " << sum << endl;

    return 0;
}