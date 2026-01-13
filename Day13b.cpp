#include <iostream>
using namespace std;

class Permutation {
    char s[100];
    int len;

    void swapChar(char &a, char &b) {
        char t = a;
        a = b;
        b = t;
    }

    void permute(int l, int r) {
        if (l == r) {
            cout << s << endl;
            return;
        }

        for (int i = l; i <= r; i++) {
            swapChar(s[l], s[i]);
            permute(l + 1, r);
            swapChar(s[l], s[i]);
        }
    }

public:
    void input() {
        cin.getline(s, 100);
        len = 0;
        while (s[len] != '\0') len++;
    }

    void generate() {
        permute(0, len - 1);
    }
};

int main() {
    Permutation p;
    p.input();
    p.generate();
    return 0;
}
