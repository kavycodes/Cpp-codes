#include <iostream>
using namespace std;

class RearrangeArray {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void solve() {
        int i = 0;

        while (i < n) {
            if (a[i] >= 0 && a[i] < n && a[i] != i) {
                int correct = a[i];
                int t = a[i];
                a[i] = a[correct];
                a[correct] = t;
            } else {
                i++;
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
};

int main() {
    RearrangeArray r;
    r.input();
    r.solve();
    return 0;
}
