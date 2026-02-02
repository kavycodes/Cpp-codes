#include <iostream>
using namespace std;

class MatrixSymmetry {
    int a[10][10];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

    void check() {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i][j] != a[j][i]) {
                    cout << "False";
                    return;
                }
            }
        }
        cout << "True";
    }
};

int main() {
    MatrixSymmetry m;
    m.input();
    m.check();
    return 0;
}
