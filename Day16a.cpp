#include <iostream>
using namespace std;

class SubstringSearch {
    char text[1000];
    char pattern[1000];

    int length(char s[]) {
        int len = 0;
        while (s[len] != '\0') len++;
        return len;
    }

public:
    void input() {
        cin.getline(text, 1000);
        cin.getline(pattern, 1000);
    }

    void search() {
        int n = length(text);
        int m = length(pattern);

        if (m == 0) {
            cout << 0 << endl;
            return;
        }

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && text[i + j] == pattern[j]) {
                j++;
            }

            if (j == m) {
                cout << i << endl;
                return;
            }
        }

        cout << -1 << endl;
    }
};

int main() {
    SubstringSearch s;
    s.input();
    s.search();
    return 0;
}
