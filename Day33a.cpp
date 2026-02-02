#include <iostream>
using namespace std;

class RowWithMaxOnes {
    int a[10][10];
    int r, c;

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
    }

    void findRow() {
        int j = c - 1;
        int row = -1;

        for (int i = 0; i < r; i++) {
            while (j >= 0 && a[i][j] == 1) {
                row = i;
                j--;
            }
        }

        cout << row;
    }
};

int main() {
    RowWithMaxOnes r;
    r.input();
    r.findRow();
    return 0;
}
