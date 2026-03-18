#include <iostream>
using namespace std;

class SubarraySum {
    int a[1000];
    int n, k;

public:
    void input() {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int sum = 0, start = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];

            while (sum > k && start <= i) {
                sum -= a[start];
                start++;
            }

            if (sum == k) {
                cout << start << " " << i;
                return;
            }
        }

        cout << -1;
    }
};

int main() {
    SubarraySum s;
    s.input();
    s.solve();
    return 0;
}