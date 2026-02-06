#include <iostream>
using namespace std;

class CountPairsDiffK {
    int a[1000];
    int n, k;

public:
    void input() {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }

        int i = 0, j = 1;
        int count = 0;

        while (i < n && j < n) {
            int diff = a[j] - a[i];

            if (diff == k) {
                count++;
                i++;
                j++;
            } else if (diff < k) {
                j++;
            } else {
                i++;
                if (i == j)
                    j++;
            }
        }

        cout << count;
    }
};

int main() {
    CountPairsDiffK c;
    c.input();
    c.solve();
    return 0;
}
