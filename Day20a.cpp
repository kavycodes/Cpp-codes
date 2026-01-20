#include <iostream>
using namespace std;

class MatrixTranspose {
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

    void transpose() {
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixTranspose m;
    m.input();
    m.transpose();
    return 0;
}
