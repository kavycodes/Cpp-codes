#include <iostream>
using namespace std;

class MajorityElement {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int candidate = a[0], count = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == candidate)
                count++;
            else
                count--;

            if (count == 0) {
                candidate = a[i];
                count = 1;
            }
        }

        count = 0;
        for (int i = 0; i < n; i++)
            if (a[i] == candidate)
                count++;

        if (count > n / 2)
            cout << candidate;
        else
            cout << -1;
    }
};

int main() {
    MajorityElement m;
    m.input();
    m.solve();
    return 0;
}