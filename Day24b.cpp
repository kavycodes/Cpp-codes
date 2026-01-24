#include <iostream>
using namespace std;

class PascalsTriangle {
    int n;

public:
    void input() {
        cin >> n;
    }

    void print() {
        for (int i = 0; i < n; i++) {
            int val = 1;
            for (int j = 0; j <= i; j++) {
                cout << val << " ";
                val = val * (i - j) / (j + 1);
            }
            cout << endl;
        }
    }
};

int main() {
    PascalsTriangle p;
    p.input();
    p.print();
    return 0;
}
