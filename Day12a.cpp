#include <iostream>
using namespace std;

class Palindrome {
    char s[1000];

public:
    void input() {
        cin.getline(s, 1000);
    }

    void check() {
        int len = 0;
        while (s[len] != '\0') len++;

        int i = 0, j = len - 1;
        bool flag = true;

        while (i < j) {
            if (s[i] != s[j]) {
                flag = false;
                break;
            }
            i++;
            j--;
        }

        if (flag)
            cout << "Palindrome";
        else
            cout << "Not Palindrome";
    }
};

int main() {
    Palindrome p;
    p.input();
    p.check();
    return 0;
}
