#include <iostream>
using namespace std;

class FirstRepeating {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int minIndex = -1;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    minIndex = i;
                    cout << a[i];
                    return;
                }
            }
        }

        cout << -1;
    }
};

int main() {
    FirstRepeating f;
    f.input();
    f.solve();
    return 0;
}
