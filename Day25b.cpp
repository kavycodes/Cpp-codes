#include <iostream>
using namespace std;

class CountIslands {
    int a[10][10];
    int r, c;

    void dfs(int i, int j) {
        if (i < 0 || i >= r || j < 0 || j >= c || a[i][j] == 0)
            return;

        a[i][j] = 0;

        dfs(i + 1, j);
        dfs(i - 1, j);
        dfs(i, j + 1);
        dfs(i, j - 1);
    }

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
    }

    void countIslands() {
        int count = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 1) {
                    count++;
                    dfs(i, j);
                }
            }
        }

        cout << count;
    }
};

int main() {
    CountIslands c;
    c.input();
    c.countIslands();
    return 0;
}
