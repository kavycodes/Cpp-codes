#include <iostream>
using namespace std;

class EquilibriumIndex {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void findIndex() {
        int total = 0;
        for (int i = 0; i < n; i++)
            total += a[i];

        int left = 0;

        for (int i = 0; i < n; i++) {
            total -= a[i];
            if (left == total) {
                cout << i;
                return;
            }
            left += a[i];
        }

        cout << -1;
    }
};

int main() {
    EquilibriumIndex e;
    e.input();
    e.findIndex();
    return 0;
}
