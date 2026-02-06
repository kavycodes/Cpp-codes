#include <iostream>
using namespace std;

class MaxRotateSum {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int arrSum = 0;
        int currVal = 0;

        for (int i = 0; i < n; i++) {
            arrSum += a[i];
            currVal += i * a[i];
        }

        int maxVal = currVal;

        for (int i = 1; i < n; i++) {
            currVal = currVal + arrSum - n * a[n - i];
            if (currVal > maxVal)
                maxVal = currVal;
        }

        cout << maxVal;
    }
};

int main() {
    MaxRotateSum m;
    m.input();
    m.solve();
    return 0;
}
