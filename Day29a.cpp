#include <iostream>
using namespace std;

class BooleanMatrixDSA2 {
    int a[10][10];
    int r, c;

    void markRow(int i) {
        for (int j = 0; j < c; j++)
            if (a[i][j] == 0)
                a[i][j] = 2;
    }

    void markCol(int j) {
        for (int i = 0; i < r; i++)
            if (a[i][j] == 0)
                a[i][j] = 2;
    }

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
    }

    void solve() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 1) {
                    markRow(i);
                    markCol(j);
                }
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 2)
                    a[i][j] = 1;
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    BooleanMatrixDSA2 b;
    b.input();
    b.solve();
    return 0;
}
