#include <iostream>
using namespace std;

class TripletsZeroSum {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
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

        for (int i = 0; i < n - 2; i++) {
            int l = i + 1, r = n - 1;

            while (l < r) {
                int sum = a[i] + a[l] + a[r];

                if (sum == 0) {
                    cout << a[i] << " " << a[l] << " " << a[r] << endl;
                    l++;
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    r--;
                }
            }
        }
    }
};

int main() {
    TripletsZeroSum t;
    t.input();
    t.solve();
    return 0;
}
