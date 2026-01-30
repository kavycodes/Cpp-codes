#include <iostream>
using namespace std;

class MaximumDifference {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void findMaxDiff() {
        if (n < 2) {
            cout << 0;
            return;
        }

        int minVal = a[0];
        int maxDiff = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] > minVal) {
                int diff = a[i] - minVal;
                if (diff > maxDiff)
                    maxDiff = diff;
            } else {
                minVal = a[i];
            }
        }

        cout << maxDiff;
    }
};

int main() {
    MaximumDifference m;
    m.input();
    m.findMaxDiff();
    return 0;
}
