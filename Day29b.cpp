#include <iostream>
using namespace std;

class BooleanMatrixDSA1 {
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
        int rows[10] = {0};
        int cols[10] = {0};

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 1) {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (rows[i] > 0 || cols[j] > 0)
                    a[i][j] = 1;
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    BooleanMatrixDSA1 b;
    b.input();
    b.solve();
    return 0;
}
