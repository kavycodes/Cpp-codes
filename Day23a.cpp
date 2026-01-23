#include <iostream>
using namespace std;

class MatrixDiagonals {
    int a[10][10];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
    }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << a[i][i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << a[i][n - i - 1] << " ";
        }
        cout << endl;
    }
};

int main() {
    MatrixDiagonals m;
    m.input();
    m.print();
    return 0;
}
