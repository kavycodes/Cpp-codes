#include <iostream>
using namespace std;

class LongestCommonPrefix {
    char strs[10][100];
    int n;

public:
    void input() {
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            cin.getline(strs[i], 100);
        }
    }

    void findPrefix() {
        if (n == 0) {
            cout << "";
            return;
        }

        int index = 0;

        while (true) {
            char ch = strs[0][index];
            if (ch == '\0') break;

            for (int i = 1; i < n; i++) {
                if (strs[i][index] != ch) {
                    cout << "\n";
                    return;
                }
            }

            cout << ch;
            index++;
        }
        cout << "\n";
    }
};

int main() {
    LongestCommonPrefix lcp;
    lcp.input();
    lcp.findPrefix();
    return 0;
}
