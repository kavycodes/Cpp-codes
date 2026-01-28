#include <iostream>
using namespace std;

class BooleanMatrix1 {
    int a[10][10];
    int r, c;

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
    }

    void solve() {
        int firstRow = 0, firstCol = 0;

        for (int i = 0; i < r; i++)
            if (a[i][0] == 1)
                firstCol = 1;

        for (int j = 0; j < c; j++)
            if (a[0][j] == 1)
                firstRow = 1;

        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                if (a[i][j] == 1) {
                    a[i][0] = 1;
                    a[0][j] = 1;
                }
            }
        }

        for (int i = 1; i < r; i++)
            for (int j = 1; j < c; j++)
                if (a[i][0] == 1 || a[0][j] == 1)
                    a[i][j] = 1;

        if (firstRow)
            for (int j = 0; j < c; j++)
                a[0][j] = 1;

        if (firstCol)
            for (int i = 0; i < r; i++)
                a[i][0] = 1;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    BooleanMatrix1 b;
    b.input();
    b.solve();
    return 0;
}
