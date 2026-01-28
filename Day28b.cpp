#include <iostream>
using namespace std;

class BooleanMatrix2 {
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
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 1) {
                    for (int k = 0; k < c; k++)
                        if (a[i][k] == 0)
                            a[i][k] = -1;

                    for (int k = 0; k < r; k++)
                        if (a[k][j] == 0)
                            a[k][j] = -1;
                }
            }
        }

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                if (a[i][j] == -1)
                    a[i][j] = 1;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    BooleanMatrix2 b;
    b.input();
    b.solve();
    return 0;
}
