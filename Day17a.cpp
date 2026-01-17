#include <iostream>
using namespace std;

class StringCompressor {
    char s[1000];

    int length() {
        int len = 0;
        while (s[len] != '\0') len++;
        return len;
    }

public:
    void input() {
        cin.getline(s, 1000);
    }

    void compress() {
        int n = length();
        int index = 0;

        for (int i = 0; i < n; ) {
            char current = s[i];
            int count = 0;

            while (i < n && s[i] == current) {
                i++;
                count++;
            }

            s[index++] = current;

            if (count > 1) {
                int digits[10];
                int d = 0;

                while (count > 0) {
                    digits[d++] = count % 10;
                    count /= 10;
                }

                for (int k = d - 1; k >= 0; k--) {
                    s[index++] = digits[k] + '0';
                }
            }
        }

        s[index] = '\0';
        cout << s << endl;
    }
};

int main() {
    StringCompressor c;
    c.input();
    c.compress();
    return 0;
}
