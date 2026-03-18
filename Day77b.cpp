#include <iostream>
using namespace std;

class MoveZeros {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                j++;
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
};

int main() {
    MoveZeros m;
    m.input();
    m.solve();
    return 0;
}