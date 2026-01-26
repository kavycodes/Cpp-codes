#include <iostream>
using namespace std;

class MatrixMedian {
    int a[10][10];
    int r, c;

    int countLessEqual(int x) {
        int cnt = 0;
        for (int i = 0; i < r; i++) {
            int l = 0, h = c - 1;
            while (l <= h) {
                int m = (l + h) / 2;
                if (a[i][m] <= x)
                    l = m + 1;
                else
                    h = m - 1;
            }
            cnt += l;
        }
        return cnt;
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

    void findMedian() {
        int low = a[0][0], high = a[0][c - 1];

        for (int i = 1; i < r; i++) {
            if (a[i][0] < low)
                low = a[i][0];
            if (a[i][c - 1] > high)
                high = a[i][c - 1];
        }

        int desired = (r * c + 1) / 2;

        while (low < high) {
            int mid = (low + high) / 2;
            if (countLessEqual(mid) < desired)
                low = mid + 1;
            else
                high = mid;
        }

        cout << low;
    }
};

int main() {
    MatrixMedian m;
    m.input();
    m.findMedian();
    return 0;
}
