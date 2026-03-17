#include <iostream>
using namespace std;

class PairSum {
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
                if (a[i] + a[j] == k)
                    cout << a[i] << " " << a[j] << endl;
            }
        }
    }
};

int main() {
    PairSum p;
    p.input();
    p.solve();
    return 0;
}