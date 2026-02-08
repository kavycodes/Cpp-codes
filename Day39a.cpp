#include <iostream>
using namespace std;

class SeparateEvenOdd {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int i = 0, j = n - 1;

        while (i < j) {
            while (i < j && a[i] % 2 == 0)
                i++;
            while (i < j && a[j] % 2 != 0)
                j--;

            if (i < j) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
};

int main() {
    SeparateEvenOdd s;
    s.input();
    s.solve();
    return 0;
}
