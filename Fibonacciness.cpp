#include <iostream>
#include <algorithm>
using namespace std;
 
int maxFibonacciness(int a1, int a2, int a4, int a5) {
    int maxFib = 0;
    for (int a3 = -100; a3 <= 100; a3++) {
        int fibCount = 0;
        if (a3 == a1 + a2) {
            fibCount += 1;
        }
        if (a4 == a2 + a3) {
            fibCount += 1;
        }
        if (a5 == a3 + a4) {
            fibCount += 1;
        }
        maxFib = max(maxFib, fibCount);
    }
    return maxFib;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        cout << maxFibonacciness(a1, a2, a4, a5) << endl;
    }
    return 0;
}
