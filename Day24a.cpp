#include <iostream>
using namespace std;

class BoundaryTraversal {
    int a[10][10];
    int r, c;

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
    }

    void traverse() {
        if (r == 0 || c == 0)
            return;

        for (int j = 0; j < c; j++)
            cout << a[0][j] << " ";

        for (int i = 1; i < r; i++)
            cout << a[i][c - 1] << " ";

        if (r > 1) {
            for (int j = c - 2; j >= 0; j--)
                cout << a[r - 1][j] << " ";
        }

        if (c > 1) {
            for (int i = r - 2; i > 0; i--)
                cout << a[i][0] << " ";
        }
    }
};

int main() {
    BoundaryTraversal b;
    b.input();
    b.traverse();
    return 0;
}
