#include <iostream>
using namespace std;

class SingleElement {
    int a[1000];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void findSingle() {
        int x = 0;

        for (int i = 0; i < n; i++)
            x ^= a[i];

        cout << x;
    }
};

int main() {
    SingleElement s;
    s.input();
    s.findSingle();
    return 0;
}
