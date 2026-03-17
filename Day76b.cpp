#include <iostream>
using namespace std;

class Leaders {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int maxRight = a[n - 1];
        cout << maxRight << " ";

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > maxRight) {
                maxRight = a[i];
                cout << maxRight << " ";
            }
        }
    }
};

int main() {
    Leaders l;
    l.input();
    l.solve();
    return 0;
}