#include <iostream>
using namespace std;

class MatrixDiagonals {
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

    void print() {
        int k = 0;
        for (int col = 0; col < c; col++) {
            int i = 0, j = col;
            while (i < r && j >= 0) {
                cout << a[i][j] << " ";
                i++;
                j--;
            }
            cout << endl;
        }

        for (int row = 1; row < r; row++) {
            int i = row, j = c - 1;
            while (i < r && j >= 0) {
                cout << a[i][j] << " ";
                i++;
                j--;
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixDiagonals m;
    m.input();
    m.print();
    return 0;
}
