#include <iostream>
using namespace std;

class ValidPalindrome {
    char s[1000];

    int length() {
        int len = 0;
        while (s[len] != '\0') len++;
        return len;
    }

    bool isPalindrome(int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

public:
    void input() {
        cin.getline(s, 1000);
    }

    void check() {
        int i = 0;
        int j = length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                if (isPalindrome(i + 1, j) || isPalindrome(i, j - 1))
                    cout << "True";
                else
                    cout << "False";
                return;
            }
            i++;
            j--;
        }

        cout << "True";
    }
};

int main() {
    ValidPalindrome v;
    v.input();
    v.check();
    return 0;
}
