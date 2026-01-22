#include <iostream>
using namespace std;

class MatrixMultiplication {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

public:
    void input() {
        cin >> r1 >> c1;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cin >> a[i][j];
            }
        }

        cin >> r2 >> c2;
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cin >> b[i][j];
            }
        }
    }

    void multiply() {
        if (c1 != r2) {
            cout << -1;
            return;
        }

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                c[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixMultiplication m;
    m.input();
    m.multiply();
    return 0;
}
