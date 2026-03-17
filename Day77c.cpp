#include <iostream>
using namespace std;

class MissingNumber {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];
    }

    void solve() {
        int sum = n * (n + 1) / 2;
        int curr = 0;

        for (int i = 0; i < n - 1; i++)
            curr += a[i];

        cout << sum - curr;
    }
};

int main() {
    MissingNumber m;
    m.input();
    m.solve();
    return 0;
}