#include <iostream>
using namespace std;

class SearchMatrix {
    int a[10][10];
    int r, c, target;

public:
    void input() {
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        cin >> target;
    }

    void search() {
        int low = 0;
        int high = r * c - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int x = mid / c;
            int y = mid % c;

            if (a[x][y] == target) {
                cout << "True";
                return;
            } else if (a[x][y] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << "False";
    }
};

int main() {
    SearchMatrix s;
    s.input();
    s.search();
    return 0;
}
