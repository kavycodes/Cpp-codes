#include <iostream>
using namespace std;

class NextGreatest {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void replace() {
        int maxRight = -1;

        for (int i = n - 1; i >= 0; i--) {
            int curr = a[i];
            a[i] = maxRight;
            if (curr > maxRight)
                maxRight = curr;
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
};

int main() {
    NextGreatest n;
    n.input();
    n.replace();
    return 0;
}
