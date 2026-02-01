#include <iostream>
using namespace std;

class SumOfDiagonals {
    int a[10][10];
    int n;

public:
    void input() {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

    void calculate() {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i][i];
            sum += a[i][n - i - 1];
        }

        if (n % 2 == 1)
            sum -= a[n / 2][n / 2];

        cout << sum;
    }
};

int main() {
    SumOfDiagonals s;
    s.input();
    s.calculate();
    return 0;
}
