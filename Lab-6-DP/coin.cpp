#include <iostream>
#include <vector>
#include <climits>  // สำหรับ INT_MAX
using namespace std;

void CHANGE(int n) {
    int d[] = {1, 4, 5, 10}; // ชุดเหรียญ
    int k = 4;

    // C = จำนวนเหรียญน้อยสุด
    vector<int> C(n + 1, INT_MAX);
    // coinUsed = เก็บว่าเหรียญสุดท้ายที่ใช้คือเหรียญอะไร
    vector<int> coinUsed(n + 1, -1);

    // Base case
    C[0] = 0;

    for (int p = 1; p <= n; p++) {
        int minCoins = INT_MAX;
        int bestCoin = -1;

        for (int i = 0; i < k; i++) {
            if (p >= d[i]) {
                if (C[p - d[i]] != INT_MAX && C[p - d[i]] + 1 < minCoins) {
                    minCoins = C[p - d[i]] + 1;
                    bestCoin = d[i];
                }
            }
        }
        C[p] = minCoins;
        coinUsed[p] = bestCoin;
    }

    // แสดงจำนวนเหรียญน้อยที่สุด
    if (C[n] == INT_MAX) {
        cout << "Cannot make change for " << n << endl;
        return;
    }

    cout << "Minimum coins needed for " << n << " = " << C[n] << endl;

    // แสดงว่าถอนเหรียญอะไรบ้าง
    cout << "Coins used: ";
    int amount = n;
    while (amount > 0 && coinUsed[amount] != -1) {
        cout << coinUsed[amount] << " ";
        amount -= coinUsed[amount];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter amount: ";
    cin >> n;
    CHANGE(n);
    return 0;
}