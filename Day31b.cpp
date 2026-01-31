#include <iostream>
using namespace std;

class LongestConsecutive {
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

        int longest = 1;
        int curr = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1] + 1) {
                curr++;
            } else if (a[i] != a[i - 1]) {
                curr = 1;
            }

            if (curr > longest)
                longest = curr;
        }

        cout << longest;
    }
};

int main() {
    LongestConsecutive l;
    l.input();
    l.solve();
    return 0;
}
