#include <iostream>
using namespace std;

class SubsequenceCheck {
    char a[1000], b[1000];

    int length(char s[]) {
        int len = 0;
        while (s[len] != '\0') len++;
        return len;
    }

public:
    void input() {
        cin.getline(a, 1000);
        cin.getline(b, 1000);
    }

    void check() {
        int i = 0, j = 0;
        int n = length(a);
        int m = length(b);

        while (i < n && j < m) {
            if (a[i] == b[j])
                i++;
            j++;
        }

        if (i == n)
            cout << "True";
        else
            cout << "False";
    }
};

int main() {
    SubsequenceCheck s;
    s.input();
    s.check();
    return 0;
}
