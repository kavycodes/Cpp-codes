#include <iostream>
using namespace std;

class MatrixSearch {
    int a[10][10];
    int r, c, x;

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        cin >> x;
    }

    void search() {
        int i = 0, j = c - 1;

        while (i < r && j >= 0) {
            if (a[i][j] == x) {
                cout << i << " " << j;
                return;
            } else if (a[i][j] > x) {
                j--;
            } else {
                i++;
            }
        }

        cout << -1;
    }
};

int main() {
    MatrixSearch m;
    m.input();
    m.search();
    return 0;
}
